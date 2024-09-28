import React, { useState } from 'react';

function Calculator() {
  const [num1, setNum1] = useState(0);
  const [num2, setNum2] = useState(0);
  const [operator, setOperator] = useState('');
  const [result, setResult] = useState(0);

  const handleOperator = (op) => {
    setOperator(op);
  };

  const handleCalculate = () => {
    switch (operator) {
      case '+':
        setResult(num1 + num2);
        break;
      case '-':
        setResult(num1 - num2);
        break;
      case '*':
        setResult(num1 * num2);
        break;
      case '/':
        if (num2 !== 0) {
          setResult(num1 / num2);
        } else {
          setResult('Error: Division by zero!');
        }
        break;
      default:
        setResult('Error: Invalid operator!');
    }
  };

  return (
    <div>
      <h1>Simple Calculator Program</h1>
      <center>
      <input
        type="number"
        value={num1}
        onChange={(e) => setNum1(parseInt(e.target.value))}
        placeholder="Number 10"
      /><br/>
      <select value={operator} onChange={(e) => handleOperator(e.target.value)}>
        <option value="+">+</option>
        <option value="-">-</option>
        <option value="*">*</option>
        <option value="/">/</option>
      </select><br/>
      <input
        type="number"
        value={num2}
        onChange={(e) => setNum2(parseInt(e.target.value))}
        placeholder="Number 2"
      />
      <br/>
      <button onClick={handleCalculate}>Calculate</button>
      <p>Result: {result}</p>
      </center>
    </div>
  );
}

export default Calculator;