function getPairsCount(arr, n, k) {
  let count = 0;
  const numCount = {};

  for (let i = 0; i < n; i++) {
    const complement = k - arr[i];
    console.log(numCount[complement]);
    if (numCount[complement]) {
      count += numCount[complement];
    }

    if (numCount[arr[i]]) {
      numCount[arr[i]]++;
    } else {
      numCount[arr[i]] = 1;
    }
  }

  return count;
}

console.log(getPairsCount([1, 5, 7, 1], 4, 6));
