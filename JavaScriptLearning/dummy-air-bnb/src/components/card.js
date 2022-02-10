import React from "react";

export default function Card(cardProps) {
  let badgeText
  if (cardProps.card.openSpots === 0) {
      badgeText = "SOLD OUT"
  } else if (cardProps.card.location === "Online") {
      badgeText = "ONLINE"
  }
  return (
    <div className="card">
      <img src={`../images/${cardProps.card.coverImg}`} class="card-img"></img>
      {badgeText && <div className="card-badge">{badgeText}</div>}
      <div className="card-stats">
        <img src="../images/star.png" className="card-star"></img>
        <span>{cardProps.card.stats.rating}</span>
        <span className="gray">({cardProps.card.stats.reviewCount}) •</span>
        <span className="gray">{cardProps.card.location}</span>
      </div>
      <p className="card-title">{cardProps.card.title}</p>
      <p className="card-price"> <span className="bold">From ${cardProps.card.price}</span> / person</p>
    </div>
  );
}
