function findTriplets(arr) {
  const triplets = [];
  const len = arr.length;

  for (let i = 0; i < len - 2; i++) {
    for (let j = i + 1; j < len - 1; j++) {
      for (let k = j + 1; k < len; k++) {
        if (arr[i] + arr[j] + arr[k] === 0) {
          triplets.push([arr[i], arr[j], arr[k]]);
        }
      }
    }
  }

  return triplets;
}

// Example usage:
const array = [1, -2, 3, 0, -1, 2, -3, 4, -4];
const triplets = findTriplets(array);
console.log(triplets);