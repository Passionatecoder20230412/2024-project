import React, { Component } from 'react'

class Classclick extends Component {
    constructor(props) {
      super(props)
    
      this.state = {
         message:'hello how are you'
      }
    }
    
    Eventhandle() {
      this.setState(
        {
            message : 'fine mama you'
        }
        
      )
      
    }
    

  render() {
    return (
      <div>
        <p>{this.state.message}</p>
        <button onClick={()=>this.Eventhandle()}>button-111</button>
      </div>
    )
  }
}

export default Classclick
