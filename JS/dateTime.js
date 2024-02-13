// Dates

let myDate = new Date()
// console.log(myDate);
// console.log(myDate.toUTCString());
// console.log(myDate.toString());

// let startTime = new Date()
// console.log(startTime.toTimeString());
// let endTime = new Date()
// console.log(endTime.toTimeString());
// console.log(endTime - startTime);

// console.log(myDate.toString());
// console.log(myDate.toDateString());
// console.log(myDate.toLocaleString());
// console.log(myDate.toUTCString());

// console.log(typeof myDate);
// let newDate = new Date(2023, 12, 9)
// let newDate = new Date("2023-09-12")
// let newDate = new Date("09-12-2023")
// console.log(newDate.toDateString());

let myTimeStamp = Date.now()
// console.log(myDate.getTime());
// console.log(Math.floor(myTimeStamp/1000));

let newDate = new Date()
// console.log(newDate.getDate());
// console.log(newDate.getMonth() + 1);
// console.log(newDate.getDay());
// console.log(newDate.getFullYear());

// console.log(`Day : ${newDate.getDay()} \nMonth : ${newDate.getMonth() + 1} \nYear : ${newDate.getFullYear()}`);

console.log(new Date().toLocaleString('en-IN', {
    weekday: 'long',  // Display the full name of the weekday
}));
