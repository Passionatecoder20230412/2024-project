let students = [
    { id: 1, username: 'john', password: 'password123', results: { math: 90, science: 80 } },
    { id: 2, username: 'jane', password: 'password456', results: { math: 80, science: 90 } },
    // Add more students here...
  ];
  
  export function configureFakeBackend() {
    let realFetch = window.fetch;
    window.fetch = function (url, opts) {
      return new Promise((resolve, reject) => {
        // wrap in timeout to simulate server api call
        setTimeout(() => {
          // authenticate
          if (url.endsWith('/students/authenticate') && opts.method === 'POST') {
            // get parameters from post request
            let params = JSON.parse(opts.body);
  
            // find if any student matches login credentials
            let filteredStudents = students.filter(student => {
              return student.username === params.username && student.password === params.password;
            });
  
            if (filteredStudents.length) {
              // if login details are valid return student details and fake jwt token
              let student = filteredStudents[0];
              let responseJson = {
                id: student.id,
                username: student.username,
                results: student.results,
                token: 'fake-jwt-token',
              };
              resolve({ ok: true, text: () => Promise.resolve(JSON.stringify(responseJson)) });
            } else {
              // else return error
              reject('Username or password is incorrect');
            }
  
            return;
          }
  
          // get student results
          if (url.endsWith('/students/results') && opts.method === 'GET') {
            // check for fake auth token in header and return results if valid
            if (opts.headers && opts.headers.Authorization === 'Bearer fake-jwt-token') {
              // find student by id in students array
              let student = students.find(student => student.id === parseInt(opts.headers.id));
              if (student) {
                resolve({ ok: true, text: () => JSON.stringify(student.results) });
              } else {
                reject('Unauthorised');
              }
            } else {
              // return 401 not authorised if token is null or invalid
              reject('Unauthorised');
            }
  
            return;
          }
  
          // pass through any requests that aren't intercepted
          realFetch(url, opts).then(response => resolve(response));
        }, 500);
      });
    };
  }