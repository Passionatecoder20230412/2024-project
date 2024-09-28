import React, { Component } from 'react'
import Purecomponentss from './Purecomponentss'
import Regularcomp from './Regularcomp'
import Remocomp from './Remocomp'
class Parentcomponent extends Component {
    constructor(props) {
      super(props)
    
      this.state = {
         name:"mohan das"
      }
    }
    
    componentDidMount(){
        setInterval(()=>{
        this.setState(
            {
                name:"vijay das"
            }
        )
    },2000) 
}
  render() {
    console.log("*****parentcomponent****")
    return (
      <div>
        hello ganesh
        <Remocomp name={this.state.name}/>
         
        <Regularcomp name={this.state.name}/> 
      </div>
    )
  }
}

export default Parentcomponent
