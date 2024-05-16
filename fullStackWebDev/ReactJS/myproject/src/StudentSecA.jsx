import React from "react";
// Method 1
// function StudentSecA(a) {
//     // return <h1>This is heading one in StudentSecA file</h1>
//     return <h1>Roll: {a.roll}</h1>
// }
// Method 2
function StudentSecA({roll}) {
    // return <h1>This is heading one in StudentSecA file</h1>
    return <h1>Roll: {roll}</h1>
}
export default StudentSecA;