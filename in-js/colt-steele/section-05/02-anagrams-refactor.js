// const str1 = "texttwisttime";
const str1 = " ";
// const str2 = "timetwisttext";
const str2 = " ";

function validAnagram(str1, str2) {
  if (str1.length !== str2.length) return false;

  const lookup = {};

  for (let i = 0; i < first.length; i++) {
    let letter = first[i];

    lookup[letter] ? (lookup[letter] += 1) : (lookup[letter] = 1);
  }

  for (let i = 0; i < str2.length; i++) {
    letter = second[i];

    if (!lookup[letter]) return false;
    else lookup[letter] -= 1;
  }

  return true;
}

console.log(validAnagram(str1, str2));
