import logo from './logo.svg';
import './App.css';
import Navbar from "./components/navbar"
import Hero from "./components/hero"
import Card from "./components/card"
import cardData from "./components/data"

function App() {
    const cardElements = cardData.map((card) => {
        return <Card
            id={card.id}
            title={card.title}
            description={card.description}
            price={card.price}
            coverImg={card.coverImg}
            rating={card.stats.rating}
            reviewCount={card.stats.reviewCount}
            location={card.location}
            openSpots={card.openSpots}
        />
    })
    console.log(cardElements);
    return (<div>
        <Navbar />
        <Hero />

        {cardElements}

    </div>
    );
}

export default App;