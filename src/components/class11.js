import React ,{Component} from 'react';

class Joke extends Component{
    constructor(){
        super()
        this.state={
           Count:0
        }

    }
    dhangeMani(){
        this.setState(
            {
                Count:this.state.Count+1
            })
            
            console.log(this.state.Count)
            
        
    }
    render(){
        return (
        <div>
        <h1>Count-{this.state.Count} </h1>
        <input type="button"name="vijay"value="butn"onClick={()=>this.dhangeMani()}></input>
        </div>
        )
    }
}
export default Joke