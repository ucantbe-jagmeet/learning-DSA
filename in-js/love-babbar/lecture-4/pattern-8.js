function pattern8(n) {
  const result = [];
  for (let i = n; i > 0; i--) {
    const row = [];
    for (let j = 1; j <= i; j++) {
      row.push("*");
    }
    result.push(row);
  }

  result.forEach((row) => {
    console.log(row.join(" ")); // Join the row elements with a space
  });
}

pattern8(4);
