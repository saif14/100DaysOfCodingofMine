let cards = []
let sum = 0
let hasBlackJack = false
let isAlive = false
let message = ""

let player = {
    name: "Saif",
    chips: 145
}

let playerEl = document.getElementById("player-el")
let messageEl = document.getElementById("message-el")
let sumEl = document.getElementById("sum-el")
let cardsEl = document.getElementById("cards-el")

playerEl.textContent = player.name + ": $" + player.chips

// if (isAlive === false) {
//     document.getElementById("newCardBtn").disabled = true;
// }


function startGame() {
    isAlive = true
        // document.getElementById("newCardBtn").disabled = false;
    let firstCard = getRandomCard()
    let secondCard = getRandomCard()
    cards = [firstCard, secondCard]
    sum = firstCard + secondCard
    renderGame()
}

function renderGame() {
    // render out firstCard and secondCard
    // cardsEl.textContent = "Cards: " + cards[0] + " " + cards[1]
    cardsEl.textContent = "Cards: "
    for (i = 0; i < cards.length; i++) {

        cardsEl.textContent += cards[i] + " "
    }
    // render out ALL the cards we have
    sumEl.textContent = "Sum: " + sum
    if (sum <= 20) {
        message = "Do you want to draw a new card?"
    } else if (sum === 21) {
        message = "You've got Blackjack!"
        hasBlackJack = true
    } else {
        message = "You're out of the game!"
        isAlive = false
    }
    messageEl.textContent = message
}

function getRandomCard() {
    let rand = Math.round(Math.random() * 13) + 1
    if (rand === 1) return 1;
    else if (rand >= 11 && rand <= 13) return 10;
    else return (rand);
}

function newCard() {
    if (isAlive === true && hasBlackJack === false) {
        let card = getRandomCard()
        sum += card
        cards.push(card)
        renderGame()
    }
}