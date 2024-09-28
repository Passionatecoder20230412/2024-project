import React, { Component } from 'react'

class Condit extends Component {
    constructor(props) {
      super(props)
    
      this.state = {
        islogged:false
      }
    }
    render(){
//         let message
//     if (this.state.islogged) {
//         message=<h1>mosagadu</h1>
//     }
//     else  {
//         message=<h3>manchodu</h3> 
//     }
//   return <div>{message}</div>
//return (this.state.islogged)&&(<div>happy</div>)
const abc=['var','man','bolo']
const abcd=abc.map(abc=><i key={abc[0]}>{abc}</i>)
let a=0
let i=0
for(let i=0;i<10;i++){
  a=i
           
} console.log(a)
return <div>
  <h1> hello{abcd}</h1>
  <h2>{a}</h2>
  <h2>{i}</h2>
</div>

}
}

export default Condit
