import React from "react";
import { useState } from "react";
function Funwithhooks()
{
    // var myText = "GEHU";
    var [myText, setMyText] = useState("GEHU")
    function f1() {
        setMyText("Heloo, Rams");
    }

    return (
        <>
        <h1>{myText}</h1>
        <button onClick={f1}>Click Me</button>
        </>
    )
}
export default Funwithhooks;