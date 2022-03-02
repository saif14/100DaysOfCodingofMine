import React from "react"
import memesData from "../data/memesData"

export default function Meme() {

    // const [memeImage, setMemeImage] = React.useState(memesData.data.memes[0].url);
    const [meme, setMeme] = React.useState({
        topText: "",
        bottomText: "",
        randomImage: memesData.data.memes[0].url
    })

    function handleChange(event) {
        const { name, value} = event.target
        setMeme(preveMemeData => ({
            ...preveMemeData,
            [name]: value
        }))
    }

    const [allMemeImages, setAllMemeImages] = React.useState(memesData)

    function getMemeImage() {
        const memesArray = allMemeImages.data.memes
        const randomIdx = Math.floor(Math.random() * memesArray.length)
        const url = memesArray[randomIdx].url
        setMeme(prevMeme => ({
            ...prevMeme,
            randomImage: url
        }))
    }

    function handelSubmit(event) {
        event.preventDefault();
    }

    return (
        <main>
            <div className="form">
                <input type="text"
                    className="form-input"
                    placeholder="Top Text"
                    name="topText"
                    value={meme.topText}
                    onChange={handleChange}
                ></input>
                <input type="text"
                    className="form-input"
                    placeholder="Bottom Text"
                    name="bottomText"
                    value={meme.bottomText}
                    onChange={handleChange}
                ></input>
                <button
                    className="form-button"
                    onClick={getMemeImage}
                >Get a new meme image 🖼</button>
            </div>
            <div className="meme">
                <img src={meme.randomImage} className="meme-image"></img>
                <h2 className="meme-top-text">{meme.topText}</h2>
                <h2 className="meme-bottom-text">{meme.bottomText}</h2>
            </div>
        </main>
    );
}