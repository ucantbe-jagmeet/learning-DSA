let s = "codeleet";
let indices = [4, 5, 6, 7, 0, 2, 1, 3];

function restoreString(s, indices) {
  let collection = new Array(s.length);

  for (let key in s) {
    collection[indices[key]] = s[key];
  }

  return collection.join("");
}

console.log(restoreString(s, indices));
