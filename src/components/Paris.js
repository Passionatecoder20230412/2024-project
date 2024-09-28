import React, { Component } from 'react'

class Paris extends Component {
    constructor(props) {
        super(props)
      
        this.state = {
           male:'hello how are you'       
          }
        console.log(this.state.male)
      }
      
      static getDerivedStateFromProps(props,state){
                 console.log("mass bgm")
                 return null;
      }
      componentDidMount(){
          console.log("gagan");
      }
  render() {
    return (
      <div>
        <div>vijay</div>
      </div>
    )
  }
}

export default Paris
