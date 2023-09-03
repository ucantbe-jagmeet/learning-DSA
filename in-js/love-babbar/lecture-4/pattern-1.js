function pattern1(n) {
  const result = [];
  for (let i = 0; i < n; i++) {
    const row = [];
    for (let j = 0; j < n; j++) {
      row.push(j + 1);
    }
    result.push(row);
  }
  console.log(result);
}

pattern1(4);
