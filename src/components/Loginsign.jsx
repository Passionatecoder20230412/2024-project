import React, { useState } from 'react';

const correctEmail = 'user@example.com';
const correctPassword = 'password123';

function App() {
  const [isLogin, setIsLogin] = useState(true);
  const [email, setEmail] = useState('');
  const [password, setPassword] = useState('');
  const [loginStatus, setLoginStatus] = useState('');
  const [name, setName] = useState('');
  const [emailSignup, setEmailSignup] = useState('');
  const [passwordSignup, setPasswordSignup] = useState('');
  const [signupStatus, setSignupStatus] = useState('');

  const handleSubmitLogin = (event) => {
    event.preventDefault();
    if (email === correctEmail && password === correctPassword) {
      setLoginStatus('Login Successful!');
    } else {
      setLoginStatus('Invalid Credentials');
    }
  };

  const handleSubmitSignup = (event) => {
    event.preventDefault();
    // Here you would typically send a request to your server to create a new user
    setSignupStatus('Signup Successful!');
  };

  return (
    <div className="app-container">
      {isLogin ? (
        <div className="login-container">
          <h2 className="login-title">Login</h2>
          <form onSubmit={handleSubmitLogin}>
            <input
              type="email"
              value={email}
              onChange={(e) => setEmail(e.target.value)}
              placeholder="Email"
            /><br/><br/>
            <input
              type="password"
              value={password}
              onChange={(e) => setPassword(e.target.value)}
              placeholder="Password"
            /><br/><br/>
            <button type="submit">Login</button>
          </form>
          <p>{loginStatus}</p>
          <p>
            Don't have an account?{' '}
            <span onClick={() => setIsLogin(false)}>Signup</span>
          </p>
        </div>
      ) : (
        <div className="signup-container">
          <h2 className="signup-title">Signup</h2>
          <form onSubmit={handleSubmitSignup}>
            <input
              type="text"
              value={name}
              onChange={(e) => setName(e.target.value)}
              placeholder="Name"
            /><br/><br/>
            <input
              type="email"
              value={emailSignup}
              onChange={(e) => setEmailSignup(e.target.value)}
              placeholder="Email"
            /><br/><br/>
            <input
              type="password"
              value={passwordSignup}
              onChange={(e) => setPasswordSignup(e.target.value)}
              placeholder="Password"
            /><br/><br/>
            <button type="submit">Signup</button>
          </form>
          <p>{signupStatus}</p>
          <p>
            Already have an account?{' '}
            <span onClick={() => setIsLogin(true)}>Login</span>
          </p>
        </div>
      )}
    </div>
  );
}

export default App;