const score = 400
// console.log(typeof score);

const balance = new Number(100)
// console.log(balance);
// console.log(balance.toString().length);
// console.log(balance.toFixed(2));

const other = 23.89666
// console.log(other);
// console.log(other.toPrecision(3));
// console.log(other.toFixed(3));

const f = 1221.8494
// console.log(f);
// console.log(f.toPrecision(3));
// console.log(f.toFixed(3));

const hundred = 1000000
// console.log(hundred.toLocaleString('en-IN'));
// console.log(hundred.toLocaleString('en-US'));

// console.log(Number.MAX_VALUE);
// console.log(Number.MAX_SAFE_INTEGER);

// ++++++++++ Math +++++++++++++++++++++++++++


// console.log(Math.log(65));
// console.log(Math.abs(-2));
// console.log(Math.round(3.84));
// console.log(Math.floor(3.84));
// console.log(Math.ceil(3.84));
// console.log(Math.min(-2, -100, 43, 45, 87));
// console.log(Math.max(-2, -100, 43, 45, 87));

// console.log(Math.random());
// console.log((Math.random() * 10) + 1);

const min = 10
const max = 20

console.log((Math.floor(Math.random() * (max - min + 1))) + min)