function immediateSmaller(arr, n) {
  for (let i = 0; i < n; i++) {
    arr[i] += (arr[arr[i]] % n) * n;
    console.log((arr[arr[i]] % n) * n);
  }

  for (let i = 0; i < n; i++) {
    arr[i] = Math.floor(arr[i] / n);
  }
  console.log(arr);
}

const itemsList = [4, 0, 2, 1, 3];
immediateSmaller(itemsList, 5);
