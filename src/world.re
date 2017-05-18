module World = {
  include ReactRe.Component;
  type props = unit;
  let name = "World";
  let handleClick _ _ => {
    Js.log "World!";
    None
  };
  let render {props, updater} =>
    <div onClick=(updater handleClick)> (ReactRe.stringToElement "World") </div>;
};

include ReactRe.CreateComponent World;

let createElement = wrapProps ();
