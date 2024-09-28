import React , {useState} from 'react'

function Todolistnew() {
    let [text,setText]=useState('')
    let eventhand=(e)=>{
      e.preventDefault();
      setText(text);
      console.log(text)
    }
    if(text != null){
      return <div>{text}</div>
    }
  return (
    <div>
        <center>
            <h3>Enter the Todos list</h3>
      <input type='text'onChange={(e)=>setText(e.target.value)}value={text}/>
      <button onClick={eventhand}>Add</button>
      
      </center>
    </div>
  )
}

export default Todolistnew
