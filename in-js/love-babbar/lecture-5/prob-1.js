// leetcode Qno - 1281
function prob(n) {
  let arr = n.toString().split("");
  let sum = arr.reduce((a, b) => Number(a) + Number(b));
  let pro = 1;
  let product = arr.forEach((e) => {
    pro *= Number(e);
  });

  return Math.abs(pro - sum);
}

console.log(prob(114));
// output -> 15
