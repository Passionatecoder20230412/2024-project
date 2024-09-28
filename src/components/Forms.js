import React from 'react'
import './baliji.css'
function Forms() {
  const Okaytq=()=>{
    prompt("thank you visit again")
  }
   const Motivetag=()=>{
        alert("okay fine")
        
    }
    
  return (
    <form>
    <div>
      
      <label>Username</label><input type='text'></input><br/>
      <label>password</label><input type='text'></input><br/>
      <select className="magic">
        <option>dxc</option>
        <option>wipro</option>
        <option>tcs</option>
        <option>200</option>
</select>
<button onClick={()=>Motivetag()}target="blank">Submitt</button><br></br>
<label>Username</label><input type="email"></input><br></br>
<label>password</label><input type="password"></input><br></br>

<button type='submit'onSubmit={()=>Okaytq()}>submit</button>

    </div>
    </form>
  )
}

export default Forms
