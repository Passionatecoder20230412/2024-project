import React, { Component } from 'react'
import Paris from './Paris'
class Compmethods extends Component {
    constructor(props) {
      super(props)
    
      this.state = {
         male:"hello how are you"
      }
      console.log(this.state.male)
    }
    static getDerivedStateFromProps(props,state){
               console.log("mass bgm")
               return null;
    }
    componentDidMount(){
        console.log("vijay");
    }
    shouldComponentUpdate(nextprop,nextstate){
        console.log("magimoment")
        return true;
    }
    getSnapshotBeforeUpdate(prev,prevstate){
        console.log("getsnapshottt")
        return null;
    }
    componentDidUpdate(prev,prevstate,snap){
        console.log("componentdiduodatee")
        return null;
    }
   Whitestone=()=>{
      this.setState({
        male:'good boy'
                 
      })
    }
   
  render() {
    return (
      <div>
        <div>hello boss</div>
        <div>male</div>
        <button onClick={this.Whitestone}>bolo</button>
        <Paris/>
      </div>
    )
  }
}

export default Compmethods
