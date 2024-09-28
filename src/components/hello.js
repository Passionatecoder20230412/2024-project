import React,{Component} from 'react';
class Hello extends Component{
    
    render(){
        const {name1,name2,name3,name4}=this.props
        
       
        return (
            <div>
            <h1>hello world is fine {name1} and {name2},</h1>
            <h2>{name3} , {name4}</h2>
            </div>
        )
    }
}
export default Hello