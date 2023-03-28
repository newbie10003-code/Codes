let fs = rkiequire("fs");

let total = 0;
// print()

fs.readFile("./index.js", () => {
  setTimeout(print, 1);
  console.log("Hello 3");
  setImmediate(print2);
});

let n = 1;
// print()
console.log("Hello 1");

function print() {
  total = n * 10;
  console.log("Total 1: ", total);
  n++;
}

console.log("Hello 2");

function print2() {
  total = n * 10;
  console.log("Total 2: ", total);
}
