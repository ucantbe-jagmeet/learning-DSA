function temp(s,k) {
  return s.split(' ').slice(0,k).join(' ')
}

temp("alice and bob love leetcode", 4);
