// let score = true
// console.log(typeof score)
// // console.log(typeof score)

// let valInNo = Number(score)
// console.log(typeof valInNo)

// // if (isNaN(valInNo)) {
//     //     console.log("Conversion is not possible")
//     // }
    
// console.log(valInNo)

// let isLogged = "Nilesh"
// let boolLogged = Boolean(isLogged)
// console.log(typeof valInNo)
// console.log(boolLogged)

// let num = 10
// let str = String(num)
// console.log(typeof str)
// console.log(str)

let value = 3
let negValue = -value
// console.log(negValue)
// console.log(2 + 2);
// console.log(2 - 2);
// console.log(2 * 2);
// console.log(2 ** 2);
// console.log(2 / 3);
// console.log(2 % 3);

let str1 = "hello"
let str2 = "Newbie"
let str3 = str1 + " " + str2
// console.log(str3);

// console.log("1" + 2);
// console.log(1 + "2");
// console.log(2 + 2 + "2");
// console.log(3 + "2" + 2);

// console.log(true + false - 1);
// console.log(+ "Newbie");

let num1, num2, num3
num1 = num2 = num3 = 2 + 2
// console.log(num1, num2, num3);

let gameCounter = 100
++gameCounter
// console.log(gameCounter);

// Stack(Primitive Data Types), Heap(Reference Data Types) in Memory

let str = "Newbie"
let strCopy = "Nilesh"


console.log(strCopy);
console.log(str);

let userOne = {
    email : "nb@gmail.com",
    name : "Newbie"
}

let userTwo = userOne
userTwo.email = "nb2@gmail.com"

console.log(userOne.email)
console.log(userTwo.email)