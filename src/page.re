let component = ReasonReact.statelessComponent("Page");

Random.self_init();

let messages = [
  "Nah.",
  "Nope.",
  "Not even close.",
  "Not yet.",
  "No.",
  "Don't even ask...",
  "\":)\"",
  "Don't bother to look outside",
  "Possibly a tiny bit of sunshine? Nah.",
  "Maybe tomorrow?",
  "Keep your hopes up!"
];

let message = List.nth(messages, Random.int(List.length(messages)));

let make = _children => {
  ...component,
  render: self =>
    <article className="summer-info">
      <div className="summer-info__inner">
        <h1 className="hero-question-heading">
          (ReasonReact.stringToElement("Is it summer in Sweden yet?"))
        </h1>
        <p> (ReasonReact.stringToElement(message)) </p>
      </div>
    </article>
};
