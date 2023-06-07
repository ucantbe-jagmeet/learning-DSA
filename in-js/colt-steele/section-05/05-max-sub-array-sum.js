// wraf that accepts sorted array and number n,calculate sum of n consecutive elements in the array
// maxSubarraySum([ 1, 2, 5, 2, 8, 1, 5], 2])  => 10

function maxSubarraySum(arr, num) {
  if (arr.length === 0) {
    return 0;
  }

  let max = -10000;
  for (let i = 0; i < arr.length - num + 1; i++) {
    let temp = 0;

    for (let j = 0; j < num; j++) {
      temp += arr[i + j];
    }

    if (temp > max) {
      max = temp;
    }
  }
  return max;
}

const arr = [1, 2, 5, 2, 8, 1, 5];
console.log(maxSubarraySum(arr, 2));
