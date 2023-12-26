function temp(s, t) {
    return s.split('').sort().join('') == t.split('').sort().join('');

}

temp("anagram", "nagaram")