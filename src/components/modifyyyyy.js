import React,{useState} from 'react'

function App() {
  var [number,setNumber]=useState('')
  var mustu=()=>{
    setNumber(number);
  }
  let p=0;
  let z=0;
  const proper=()=>{
  for(let i=number.length-1;i>=0;i--){
    number=(number%10)*Math.pow(10,i)
    
  }
}
  return (
    <div>
      <input type='number'value={number}onChange={(e)=>parseInt(setNumber(e.target.value))} />
    <button onClick={proper()} >submit</button>
    <h2>{p}</h2>
      <h2>{number}</h2>
    </div>
  )
}

export default App
