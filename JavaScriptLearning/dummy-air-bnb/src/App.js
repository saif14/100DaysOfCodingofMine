import logo from './logo.svg';
import './App.css';
import Navbar from "./components/navbar"
import Hero from "./components/hero"
import Card from "./components/card"

function App() {
  return (
   <div>
     <Navbar/>
     <Hero/>
     <Card 
     img="katie-zaferes.png"
     rating="5.0"
     reviewCount = "6"
     country = "America"
     title = "Life Lesson with Katie Zeferes"
     price = {136}
     />
   </div>
  );
}

export default App;
