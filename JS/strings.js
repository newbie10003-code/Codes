const name = "Newbie"
const repoCount = 50

// console.log(name + repoCount + " Value");

// console.log(`Hello my name is ${name} and my repo count is ${repoCount}`);

const gameName = new String("Newbie-C+@-324")

// console.log(gameName[0]);
// console.log(gameName.__proto__);

// console.log(gameName.length);
// console.log(gameName.toUpperCase());
// console.log(gameName.indexOf('t'));
// console.log(gameName.charAt(5));

const newGame = gameName.substring(0, 3)
// console.log(newGame);

const anotherVar = gameName.slice(-5, -1)
// console.log(anotherVar);

const newStr = "     Newbie    \n Nilesh is a good boy       "
// console.log(newStr);
// console.log(newStr.trim());

const url = "https://www.google.com/"
console.log(url);
url.replace("www", "www11")
console.log(url.replace("www", "www11"));

console.log(url.includes("office"));

const arr = gameName.split('-')
console.log(arr);