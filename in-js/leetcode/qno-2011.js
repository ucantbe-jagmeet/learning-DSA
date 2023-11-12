function temp(operations) {
  let incrementCount = 0;
  let decrementCount = 0;

  operations.forEach((operation) => {
    if (operation.endsWith("++")) {
      incrementCount++;
    } else if (operation.startsWith("--")) {
      decrementCount++;
    }
  });
  console.log(incrementCount - decrementCount);
  return incrementCount - decrementCount;
}

temp(["--X", "X++", "X++"]);
