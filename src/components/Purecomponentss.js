import React, { PureComponent } from 'react'

class Purecomponentss extends PureComponent {

  render() {
    console.log("****pure component***")
    return (
      <div>
        pure component hello{this.props.name}
      </div>
    )
  }
}

export default Purecomponentss

