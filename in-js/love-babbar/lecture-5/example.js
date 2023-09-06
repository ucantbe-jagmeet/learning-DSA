function findresult(s) {
  const regex = /(\d+|[\+\-\*\/])/g;
  const tokens = s.match(regex);
  console.log(tokens);
  tokens.reverse();

  const reversedEquation = tokens.join("");

  return;
}

findresult("5+2*56-2/4");
