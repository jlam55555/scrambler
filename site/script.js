(function() {
  var scramble = function() {
    var moves = [],
        turnTypes = [ "U", "R", "L", "D", "B", "F" ],
        revTypes = [ " ", "2", "'" ],
        types = 0,
        type = turnTypes[Math.floor(Math.random()*6)],
        output = "<tr>";
    while(types < 25)
      if(types == 0 || moves[types-1] != (type = turnTypes[Math.floor(Math.random()*6)])) {
        moves[types++] = type;
        output += "<td>" + type + revTypes[Math.floor(Math.random()*3)] + (types % 5 == 0 ? "</tr>" : "</td>");
      }
    return output;
  };
  window.onload = function() {
    var scrambleButton = document.querySelector("#scrambleButton");
    scrambleButton.addEventListener("click", function() {
      document.querySelector("#scramble").innerHTML = scramble();
    });
    scrambleButton.dispatchEvent(new Event("click"));
    document.querySelector("#infoButton").addEventListener("click", function() {
      scrollTo(0, document.querySelector("#info").offsetTop);
    });
    document.querySelector("#backTopButton").addEventListener("click", function() {
      scrollTo(0, 0);
    });
  };
})();
