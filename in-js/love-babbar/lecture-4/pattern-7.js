function pattern7(n) {
  const result = [];
  for (let i = 1; i <= n; i++) {
    const row = [];
    let index = i;
    for (let j = 1; j <= n; j++) {
      row.push(index++);
    }
    result.push(row);
  }

  result.forEach((row) => {
    console.log(row.join(" ")); // Join the row elements with a space
  });
}

pattern7(3);
