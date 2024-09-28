import React, { useState } from 'react';

const correctEmail = 'user@example.com';
const correctPassword = 'password123';

function Login() {
  const [email, setEmail] = useState('');
  const [password, setPassword] = useState('');
  const [loginStatus, setLoginStatus] = useState('');
  const correctEmail='rajvijay@gmail.com';
  const correctPassword='vijay@9490'
  const handleSubmit = (event) => {
    event.preventDefault();
    if (email === correctEmail && password === correctPassword) {
      setLoginStatus('Login Successful!');
    } else {
      setLoginStatus('Invalid Credentials');
    }
  };

  return (
    <div className="login-container">
      <h2 className="login-title">Login</h2>
      <form onSubmit={handleSubmit}>
        <input
          type="email"
          value={email}
          onChange={(e) => setEmail(e.target.value)}
          placeholder="Email"
        />
        <input
          type="password"
          value={password}
          onChange={(e) => setPassword(e.target.value)}
          placeholder="Password"
        />
        <button type="submit">Login</button>
      </form>
      <p>{loginStatus}</p>
    </div>
  );
}

export default Login;