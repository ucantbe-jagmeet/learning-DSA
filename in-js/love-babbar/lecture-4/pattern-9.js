function pattern9(n) {
  const maxNum = n * 2 - 1;
  const result = [];

  for (let i = 1; i <= n; i++) {
    const row = [];
    const numSpaces = n - i;

    for (let j = 1; j <= maxNum; j++) {
      if (j <= numSpaces || j > maxNum - numSpaces) {
        row.push(" ");
      } else {
        row.push(j - numSpaces);
      }
    }

    result.push(row.join(""));
  }

  result.forEach((row) => {
    console.log(row);
  });
}

pattern9(4);

//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
