import React from "react"
import memesData from "../data/memesData"

export default function Meme() {

    // const [memeImage, setMemeImage] = React.useState(memesData.data.memes[0].url);
    const[meme, setMeme] = React.useState({
        topText : "",
        bottomText: "",
        randomImage: memesData.data.memes[0].url
    })
    
    const [allMemeImages, setAllMemeImages] = React.useState(memesData)

    function getMemeImage(){
        const memesArray = allMemeImages.data.memes
        const randomIdx = Math.floor(Math.random()*memesArray.length)
        const url = memesArray[randomIdx].url
        setMeme(prevMeme =>({
            ...prevMeme, 
            randomImage: url
        }))
    }

    return (
        <main>
            <div className="form">
                <input type="text" 
                className="form-input"
                placeholder="Top Text"
                ></input>
                <input type="text"
                className="form-input"
                placeholder="Bottom Text"></input>
                <button 
                className="form-button"
                onClick={getMemeImage}
                >Get a new meme image 🖼</button>
                <img src={meme.randomImage}  className="meme-image"></img>
            </div>
        </main>
    );
}