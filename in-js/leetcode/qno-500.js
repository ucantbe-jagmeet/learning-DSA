let words = ["Hello", "Alaska", "Dad", "Peace"];

var findWords = function (words) {
  const firstRow = new Set("qwertyuiop");
  const secondRow = new Set("asdfghjkl");
  const thirdRow = new Set("zxcvbnm");

  function canBeTypedInOneRow(word) {
    const rowSet = new Set();
    for (let i = 0; i < word.length; i++) {
      const letter = word[i].toLowerCase();
      if (firstRow.has(letter)) {
        rowSet.add(1);
      } else if (secondRow.has(letter)) {
        rowSet.add(2);
      } else if (thirdRow.has(letter)) {
        rowSet.add(3);
      }
    }
    return rowSet.size === 1;
  }

  return words.filter(canBeTypedInOneRow);
};

console.log(findWords);
