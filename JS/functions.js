function sayMyName()
{
    console.log("N");
    console.log("E");
    console.log("W");
    console.log("B");
    console.log("I");
    console.log("E");
}

// console.log(sayMyName())
function add(a, b) {
    return a + b
}

// console.log(add(2, 4));
const result = add(3, 4)
// console.log(add(4,  "Nilesh"));
// console.log(result);

function loginUserMessage(userName) {
    if (userName == undefined) {
        return "Please enter a userName"
    }
    return `${userName} just logged in`
}

// const val = loginUserMessage("Nilesh")
// console.log(val);
console.log(loginUserMessage());
console.log(loginUserMessage("Newbie"));