import React, { Component } from 'react'

class regularcomp extends Component {
  render() {
    console.log("***regular comp****")
    return (
      <div>
        Regular component hello{this.props.name}
      </div>
    )
  }
}

export default React.memo(regularcomp)
