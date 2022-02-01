import Header from "./Header.js"

const page = (
  <div>
    <Header />
    <MainComponent />
    <Footer />
  </div>
);

function Footer() {
  return (
    <footer>
      <small>Copyright to Saif!</small>
    </footer>
  );
}

function MainComponent() {
  return (
    <div>
      <h1>Fun Facts About React</h1>
      <ul>
        <li>Was first released in 2013</li>
        <li>Was originally created by Jordan Walke</li>
        <li>Has well over 100K stars on GitHub</li>
        <li>Is maintained by Facebook</li>
        <li>Powers thousands of enterprise apps, including m</li>
      </ul>
    </div>
  );
}

function ReturnTempComponent() {
  return page;
}

ReactDOM.render(<ReturnTempComponent />, document.getElementById("root"));
