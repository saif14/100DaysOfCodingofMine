import React from 'react';
import ReactDOM from 'react-dom';
import Header from "./Header" 
import './index.css';
import App from "./App"
// import App from './App';
// import reportWebVitals from './reportWebVitals';

// ReactDOM.render(
//   <ReturnTempComponent />, document.getElementById("root")
// );

// // const page = (
// //   <div>
// //     {/* <Header /> */}
// //     <MainComponent />
// //     <Footer />
// //   </div>
// // );

// function Footer() {
//   return (
//     <footer>
//       <small>Copyright to Saif!</small>
//     </footer>
//   );
// }

// function MainComponent() {
//   return (
//     <div>
//       <h1>Fun Facts About React</h1>
//       <ul>
//         <li>Was first released in 2013</li>
//         <li>Was originally created by Jordan Walke</li>
//         <li>Has well over 100K stars on GitHub</li>
//         <li>Is maintained by Facebook</li>
//         <li>Powers thousands of enterprise apps, including m</li>
//       </ul>
//     </div>
//   );
// }

// function ReturnTempComponent() {
//   return ( <div>
//     <Header />
//     <MainComponent />
//     <Footer />
//   </div>);
// }

// // If you want to start measuring performance in your app, pass a function
// // to log results (for example: reportWebVitals(console.log))
// // or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
// // // reportWebVitals();
// import React from "react"
// import ReactDOM from "react-dom"
// import App from "./App"

ReactDOM.render(<App />, document.getElementById("root"))