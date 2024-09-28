import React from 'react'

const Products= ({data})=> {
  return (
    <div  className="row">
        {data.map(data=>
        <div className="col-md-4">
            <div className="card"style={{"width":"18rem"}}>
                <img className="card-img-top" src={data.recipe.image} alt='card imag cap'/>
                <div className="card-body">
                    
                    <center>
                        <h4 className="card-title">{data.recipe.label}</h4>
                        <p className="card-text">total number of calories : {data.recipe.calories} </p>
                        <a href="tqs for the buy up" className="btn btn-primary">Buy</a>
                    </center>
                </div>
            </div>
        </div>
                    
                

    

        )}
    </div>
      
    
  )
}

export default Products
