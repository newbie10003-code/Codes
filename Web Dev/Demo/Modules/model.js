// require, exports, module, __dirname, __filename

// console.log(__dirname)
// console.log(__filename)

let names = ["Jill", "Lynn", "Mike"]
let score = [1, 2, 3]

// module.exports = {
//     name : names,
//     scores : score
// }

module.exports.names = names;
module.exports.scores = score;

console.log(exports)

