function temp(s, words) {
  let str = "";

  for (let i = 0; i < words.length; i++) {
    str += words[i];
    if (str === s) {
      return true;
    }
  }
  return false;
}

temp("iloveleetcode", ["i", "love", "leetcode", "apples"]);
