const arr1 = [1, 2, 1];
const arr2 = [4, 1];

function Same(arr1, arr2) {
  for (let i = 0; i < arr1.length; i++) {
    let num = arr1[i] * arr1[i];

    if (arr1.length > arr2.length) return false;

    if (arr2.includes(num)) {
      arr2[i] = 1;
    }
  }

  return arr2.every(function (element) {
    return element === arr2[0];
  });
}

console.log(Same(arr1, arr2));
