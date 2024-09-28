import React, { Component } from 'react'
import Input from './Input'
class Focuspp extends Component {
    constructor(props) {
      super(props)
    this.focusref=React.createRef()
    }
    
    onclickevent=()=>{
        this.focusref.current.focus();
    }
  render() {
    return (
      <div>
        <Input ref={this.focusref} />
        <button onClick={this.onclickevent}>click</button>
      </div>
    )
  }
}

export default Focuspp
