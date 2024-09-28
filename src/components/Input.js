import React, { Component } from 'react'

class Input extends Component {
  constructor(props) {
    super(props)
  this.modem=React.createRef()
   
  }
  
  render() {
    return (
      <div>
        <input type='text'ref={this.modem}/>
      </div>
    )
  }
}

export default Input
