function temp(words, pref) {
  return (words.filter(e => e.startsWith(pref)).length);
}

temp(["pay","attention","practice","attend"], 'at');
