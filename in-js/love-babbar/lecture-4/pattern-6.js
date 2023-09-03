function pattern6(n) {
  const result = [];
  for (let i = 1; i <= n; i++) {
    const row = [];
    for (let j = i; j >= 1; j--) {
      row.push(j);
    }
    result.push(row);
  }

  result.forEach((row) => {
    console.log(row.join(" ")); // Join the row elements with a space
  });
}

pattern6(4);
