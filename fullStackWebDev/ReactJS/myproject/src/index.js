// import React from "react";
// import ReactDOM from 'react-dom';
// import Heading from "./Heading";
// import {Para, Div} from "./Para";
// import * as cs from "./Para"; // Using alias to import all exported components from Para.js
// // import Div from "./Para";
// import List from "./List";
// // import StudentSecA from "./StudentSecA";

// import StudentSecA from "./ClassComponent";
// const a = document.getElementById("ab");
// const b = ReactDOM.createRoot(a);
// // b.render(<h1> This is your heading </h1>);
// // b.render(<Heading/>);

// // b.render(
// //   <>
// //   <Heading/>
// //   <h1>This is your Heading</h1>
// //   </>
// // );abc
// // Render can take only one element as argument

// // b.render(
// //   <>
// //   <h1>These are react fragments</h1>
// //   <Heading/>
// //   <Para/>
// //   <List/>
// //   <Div/>
// //   {/* Used for rendering it as a component */}
// //   {Div()}
// //   {/* Used for calling it as a function */}
// //   {cs.Div()}
// //   {cs.default}
// //   </>
// // );

// // b.render(
// //   <List username = "Rameshwari"/>
// // );

// b.render(
//   <>
//   {/* <StudentSecA roll={46}/> */}
//   <StudentSecA roll = {46}/>
//   </>
// )

// import StateClass from "./StateClass";

import React from "react";
import ReactDOM from 'react-dom';
import Funwithhooks from "./Funwithhooks";

const a = document.getElementById("ab");
const b = ReactDOM.createRoot(a);
b.render(
  <>
  <Funwithhooks />
  </>
)