import React from "react";

export default function Card(cardProps) {
  return (
    <div className="card">
      <img src={`../images/${cardProps.img}`} class="card-img"></img>
      <div className="card-stats">
        <img src="../images/star.png" className="card-star"></img>
        <span>{cardProps.rating}</span>
        <span className="gray">({cardProps.reviewCount}) •</span>
        <span className="gray">{cardProps.country}</span>
      </div>
      <p>{cardProps.title}</p>
      <p> <span className="bold">From ${cardProps.price}</span> / person</p>
    </div>
  );
}
