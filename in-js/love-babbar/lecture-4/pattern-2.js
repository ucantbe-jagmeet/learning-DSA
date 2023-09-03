function pattern2(n) {
  const result = [];
  let index = 1;
  for (let i = 0; i < n; i++) {
    const row = [];
    for (let j = 0; j < n; j++) {
      row.push(index++);
    }
    result.push(row);
  }
  console.log(result);
}

pattern2(3);
