import React from "react";
class StateClass extends React.Component
{
    constructor ()
    {
        super();
        this.state = {
            Username:"Rams",
            count: 0,
        };
    }
    render()
    {
        return (
            <h1>Username: {this.state["Username"]}</h1>
        );
    }
}

export default StateClass;

const a = "hello";
var obj = {
    name: "Rams", 
    Roll: 35
};