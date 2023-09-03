function pattern4(n) {
  const result = [];
  let index = 1;
  for (let i = 1; i <= n; i++) {
    const row = [];
    for (let j = 1; j <= i; j++) {
      row.push(index++);
    }
    result.push(row);
  }

  result.forEach((row) => {
    console.log(row.join(" ")); // Join the row elements with a space
  });
}

pattern4(4);
