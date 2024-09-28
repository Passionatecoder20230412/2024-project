import React, { Component } from 'react'
class Inputreferblink extends Component {
    constructor(props) {
      super(props)
    this.inputRef=React.createRef()
    this.cbRef=null
    this.setcbRef=(element)=>{
      // this.cbRef.focus()
      // console.log("okay man")
      this.cbRef=element
    }
    
     
    }
    componentDidMount(){
        this.inputRef.current.focus()
        // console.log(this.inputRef)
    }
    execute=()=>{
      alert(this.inputRef.current.value)
    }
  render() {
    return (
      <div>
        <input type="text"ref = {this.setcbRef}/> <br/>
      <input type="text"ref = {this.inputRef}/> 
      <button onClick={this.execute}>click</button>
      </div>
    )
  }
}

export default Inputreferblink
