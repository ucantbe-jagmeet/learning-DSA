function pattern3(n) {
  const result = [];
  for (let i = 1; i <= n; i++) {
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

pattern3(4);
