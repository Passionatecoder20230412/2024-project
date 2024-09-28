import React ,{useState} from 'react'

function Calculator2() {
    const [num1,setNum1]=useState(0);
    const [num2,setNum2]=useState(0);
    const [operator, setOperator] = useState('');
  const [result, setResult] = useState(0);

  const handleOperator = (op) => {
    setOperator(op);
  };
    const handleevent=()=>{
        switch(operator){
            case '+': setResult(num1+num2);
            break;
            case '-': setResult(num1-num2);
            break;
            case '*': setResult(num1*num2);
            break;
            case '%': setResult((num1%num2)*100);
            break;
            case '/': 
            if(num2 !==0 ){
                setResult(num1/num2)
            
                }
            
            else{
                    setResult('error')
                }
            
            break;
            default : setResult("entered invalid option")
        }
    }


  return (
    <div>
      <input type='number'value={num1} onChange={(e)=>setNum1(e.target.value)}/>
      <select value={operator} onChange={(e)=>handleOperator(e.target.value)}>
        <option>+</option>
        <option>-</option>
        <option>*</option>
        <option>%</option>
        <option>/</option>
      </select>
      <input type='number'value={num2}onChange={(e)=>setNum2(e.target.value)}/>
      <button onClick={handleevent}>Result</button>
      <p>{result}</p>
    </div>
  )
}

export default Calculator2
