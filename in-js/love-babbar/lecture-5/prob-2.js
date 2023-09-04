// leetcode Qno - 191
function prob(n) {
  return n.toString(2).split("0").join("").length;
}

console.log(prob("10000000000000000000000000001011"));
