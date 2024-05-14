import React from "react";
import ReactDOM from 'react-dom';
import Heading from "./Heading";
import Para from "./Para";
import List from "./List";

const a = document.getElementById("ab");
const b = ReactDOM.createRoot(a);
// b.render(<h1> This is your heading </h1>);
// b.render(<Heading/>);

// b.render(
//   <>
//   <Heading/>
//   <h1>This is your Heading</h1>
//   </>
// );
// Render can take only one element as argument

b.render(
  <>
  <Heading/>
  <Para/>
  <List/>
  </>
);