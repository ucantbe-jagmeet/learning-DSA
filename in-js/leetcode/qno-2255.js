function temp(words, s) {
  return (words.filter(e => s.startsWith(e)).length);
}

temp(["a","b","c","ab","bc","abc"], 'abc');
