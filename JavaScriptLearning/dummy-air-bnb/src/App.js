import logo from './logo.svg';
import './App.css';
import Navbar from "./components/navbar"
import Hero from "./components/hero"
import Card from "./components/card"
import cardData from "./components/data"

function App() {
    const cardElements = cardData.map((card) => {
        return <Card
            key={card.id}
            card = {card}
            // title={card.title}
            // description={card.description}
            // price={card.price}
            // coverImg={card.coverImg}
            // rating={card.stats.rating}
            // reviewCount={card.stats.reviewCount}
            // location={card.location}
            // openSpots={card.openSpots}
        />
    })
    console.log(cardElements);
    return (<div>
        <Navbar />
        <Hero />
        <section className="card-list">
            {cardElements}
        </section>


    </div>
    );
}

export default App;