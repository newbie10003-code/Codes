mySym = Symbol("key")

const user = {
    name : "Newbie",
    "Full name": "Newbie Newbie",
    [mySym]: "key2",
    age: 22,
    location: "New York",
    email: "newbie@gmail.com",
    isLoggedIn: false,
    lastLoggedIn: ["Monday", "Tuesday", "Wednesday"]
}

// console.log(user.name);
// console.log(user["email"]);
// console.log(typeof user[mySym]);

// user.email = "newbie@meta.com"
// console.log(user.email);

// Object.freeze(user)
// user.email = "newbie@google.com"
// console.log(user.email);

console.log(user);