import React, { useState, useEffect } from 'react';
import axios from 'axios';

const Results = () => {
  const [results, setResults] = useState(null);
  const [error, setError] = useState(null);

  useEffect(() => {
    const token = localStorage.getItem('token');
    if (!token) {
      window.location.href = '/login';
    } else {
      axios.get('https://college-website.com/api/results', {
        headers: {
          Authorization: `Bearer ${token}`,
        },
      })
        .then((response) => {
          setResults(response.data);
        })
        .catch((error) => {
          setError(error.message);
        });
    }
  }, []);

  return (
    <div>
      <h1>Results</h1>
      {results && (
        <ul>
          {results.map((result) => (
            <li key={result.id}>{result.score}</li>
          ))}
        </ul>
      )}
      {error && <div style={{ color: 'red' }}>{error}</div>}
    </div>
  );
};

export default Results;