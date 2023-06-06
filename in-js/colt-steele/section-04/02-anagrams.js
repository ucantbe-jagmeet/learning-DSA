// const str1 = "texttwisttime";
const str1 = " ";
// const str2 = "timetwisttext";
const str2 = " ";

function validAnagram(str1, str2) {
  if (str1.length !== str2.length) return false;

  let counter = 0;
  for (let i = 0; i < str1.length; i++) {
    if (str2.includes(str1[i])) {
      counter++;
    } else {
      return false;
    }
  }

  if (counter === str1.length) {
    return true;
  }
}

console.log(validAnagram(str1, str2));
