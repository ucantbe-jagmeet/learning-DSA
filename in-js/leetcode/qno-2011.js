function temp(operations) {
  let x = 0;
  operations.forEach((item) => {
    if (item.includes("++")) x += 1;
    else x -= 1;
  });
  console.log(x);
  return x;
}

temp(["--X", "X++", "X++"]);
