function pattern3(n) {
  const result = [];
  for (let i = 1; i <= n; i++) {
    const row = [];
    for (let j = 1; j <= i; j++) {
      row.push("*");
    }
    result.push(row);
  }
  console.log(result);
}

pattern3(4);
