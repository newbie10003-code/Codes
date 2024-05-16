import React from "react";

// Method 1
function func1({name}) {
    return <h1>This is {name}</h1>
}

// Method 2
function func2(a) {
    return <h1>This is {a.username}</h1>
}

// Method 3
function func2(props) {
    return <h1>Hello, {props.name}. How are you feeling today?{props.age}</h1>
}