function temp(s, words) {
  return (
    s ===
    words.reduce((acc, word) => {
      if (acc === false || acc.length < s.length) {
        console.log(acc);
        return acc + word;
      }
      return acc;
    }, "")
  );
}

console.log(temp("iloveleetcode", ["i", "love", "leetcode", "apples"]));
