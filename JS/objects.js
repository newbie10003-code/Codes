// mySym = Symbol("key")

// const user = {
//     name : "Newbie",
//     "Full name": "Newbie Newbie",
//     [mySym]: "key2",
//     age: 22,
//     location: "New York",
//     email: "newbie@gmail.com",
//     isLoggedIn: false,
//     lastLoggedIn: ["Monday", "Tuesday", "Wednesday"]
// }

// // console.log(user.name);
// // console.log(user["email"]);
// // console.log(typeof user[mySym]);

// // user.email = "newbie@meta.com"
// // console.log(user.email);

// // Object.freeze(user)
// // user.email = "newbie@google.com"
// // console.log(user.email);

// console.log(user);

// const tinderUser = new Object()
const tinderUser = {}
tinderUser.id = "123abc"
tinderUser.name = "Newbie"
tinderUser.isLoggedIn = false
// console.log(tinderUser);


// const regUser = {
//     email: "newbie@gmail.com",
//     fullname: {
//         userfullname: {
//             firstname: "Newbie",
//             lastname: "Bhanot"
//         } 
//     }
// }

// // console.log(regUser.fullname.userfullname.lastname);

const obj1 = {
    1: "a", 2: "b"
}

const obj2 = {
    3: "a", 4: "b"
}

// const obj3 = {obj1, obj2}
// console.log(obj3);

// const obj3 = Object.assign({}, obj1, obj2)

// const obj3 = {
//     ...obj1, ...obj2
// }
// console.log(obj3);


const users = [
    {
        id: 1,
        email: "nileshbhanot18@gmail.com"
    },
    {
        id: 2,
        email: "nileshbhanot264@gmail.com"
    }
]

// console.log(users[0].email);
// console.log(users[1].email);

// console.log(Object.keys(tinderUser));
// console.log(Object.values(tinderUser));
// console.log(Object.entries(tinderUser));

// console.log(tinderUser.hasOwnProperty('isLogged'));


// ****************************************************************************
// Destructuring of an array

const course = {
    courseName: "JS",
    price: 999,
    courseInstr: "Newbie"
}

// console.log(course.courseInstr);
const {courseInstr: instr} = course
// console.log(instr);

// const navbar = ({company}) => {
//     console.log(company);
// }

// navbar(company = "Newbie")

// {
//     "name": "Newbie",
//     "courseName": "JS",
//     "price": "Free"
// }

