import React from "react";

export default function Card() {
  return (
    <div className="card">
      <img src="../images/katie-zaferes.png" class="card-img"></img>
      <div className="card-stats">
        <img src="../images/star.png" className="card-star"></img>
        <span>5.0</span>
        <span className="gray">(6) •</span>
        <span className="gray">USA</span>
      </div>
      <p>Life Lesson with Katie Zeferes</p>
      <p> <span className="bold">From $136</span> / person</p>
    </div>
  );
}
