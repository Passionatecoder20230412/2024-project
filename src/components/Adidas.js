import React,{useState} from 'react'

function Adidas() {
    const [text,setText]=useState('')
    let [magnet,setMagnet]=useState('')
    const minus=()=>{
    if (text != null) {
      return (
      <div >
        <p >
        {setMagnet(text)} 
        </p>
        </div>
      )
    }
  }
  return (
    <div>
        <div >
            <input type='text'onChange={(e)=>setText(e.target.value)}value={text}className='first'/>
        </div>
        <br/>
        <button className='button'onClick={minus}>+</button>
           <br/><br/>
       <input className='second'align='center'>{magnet}</input>
    </div>
  )
}

export default Adidas
