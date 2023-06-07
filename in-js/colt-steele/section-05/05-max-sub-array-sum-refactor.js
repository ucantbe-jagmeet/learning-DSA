// wraf that accepts sorted array and number n,calculate sum of n consecutive elements in the array
// maxSubarraySum([ 1, 2, 5, 2, 8, 1, 5], 2])  => 10

function maxSubarraySum(arr, num) {
  let max = 0;
  let temp = 0;

  if (arr.length < num) return null;

  for (let i = 0; i < num; i++) {
    max += arr[i];
  }
  temp = max;

  for (let i = num; i < arr.length; i++) {
    temp = temp - arr[i - num] + arr[i];
    max = Math.max(max, temp);
  }

  return max;
}

const arr = [2, 6, 9, 2, 1, 8, 5, 6, 3];
console.log(maxSubarraySum(arr, 3));
