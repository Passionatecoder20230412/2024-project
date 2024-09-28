import React, { Component } from 'react'

class Mousehover extends Component {
    constructor(props) {
      super(props)
    
      this.state = {
         count:0
      }
    }
    Mouse=()=>{
       this.setState(
        {
        count:this.state.count+1
                    
     } )
    
    }
  render() {
    return (
      <div onMouseOver={this.Mouse}>
        vijay count-{this.state.count}
      </div>
    )
  }
}

export default Mousehover
