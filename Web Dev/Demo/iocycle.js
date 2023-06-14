let fs = require('fs')
let total = 0

// I/O cycle
fs.readFile('./index.js', () =>
{
    setTimeout(print1, 0)
    setImmediate(print2)
})

let n = 1

// setTimeout(() => 
// {
//     console.log("Delayed for 1 second.");
// }, 1000);

function print1()
{
    total = n * 10
    console.log("Total 1: ", total)
    n++
}

function print2()
{
    total = n * 10
    console.log("Total 2: ", total)
}