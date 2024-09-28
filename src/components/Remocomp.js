import React from 'react'

function Remocomp({name}) {
    console.log("***memo compo***");
  return (
    
    <div>
      hello boss {name}
    </div>
  )
}

export default React.memo(Remocomp)
