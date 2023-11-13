function temp(operations) {
  let x = 0;
  operations.forEach((operation) => {
    if (operation === "++X" || operation === "X++") {
      x += 1;
    } else if (operation === "--X" || operation === "X--") {
      x -= 1;
    }
  });
  return x;
}

temp(["--X", "X++", "X++"]);
