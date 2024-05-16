import React from "react";
class StudentSecA extends React.Component
{
    constructor()
    {
        super();
    }
    render()
    {
        // return (<h1>This is a heading in Class Component</h1>);
        return (<h1>Roll: {this.props.roll}</h1>);
    }
}
export default StudentSecA;