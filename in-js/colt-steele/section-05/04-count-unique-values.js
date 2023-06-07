// wraf that accepts sorted array and count unique values in the array , there can be negative numbers in the array but it always ne sorted

// countUniqueValues([-2,-1,-1,0,1]) => 4

function countUniqueValues(arr) {
  if (arr.length === 0) {
    return 0;
  }

  let count = 1;
  let pivot = 1;

  while (pivot < arr.length) {
    if (arr[count - 1] !== arr[pivot]) {
      arr[count] = arr[pivot];
      count++;
    }
    pivot++;
  }

  return count;
}

const arr = [-1, 1, 1, 1, 2, 2, 3, 4, 5, 5, 5, 6, 7];
console.log(countUniqueValues(arr));
