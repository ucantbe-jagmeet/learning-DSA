// smallest positive missing number

function immediateSmaller(arr, n) {
  let j = 0;
  for (let i = 0; i < n; i++) {
    if (arr[i] <= 0) {
      [arr[i], arr[j]] = [arr[j], arr[i]];
      j++;
    }
  }

  // Consider only positive elements from index j
  // upto here j =2
  let positiveCount = n - j;

  for (let i = j; i < n; i++) {
    let index = Math.abs(arr[i]) + j - 1;
    if (index < n && arr[index] > 0) {
      arr[index] = -arr[index];
      positiveCount--;
    }
  }

  // Find the first positive index and return the missing number
  for (let i = j; i < n; i++) {
    if (arr[i] > 0) {
      return i - j + 1;
    }
  }

  console.log(positiveCount);
}

immediateSmaller([1, -2, 3, -4, 5], 5);
// i=0    -2, 1, 3, -4, 5
// i=1   -2, 1, 3, -4, 5
// i=2   -2, 1, 3, -4, 5
// i=3   -2, -4, 3, 1, 5
// i=4   -2, -4, 3, 1, 5
