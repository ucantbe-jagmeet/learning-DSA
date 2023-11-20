function temp(word1, word2) {
let arr1 = word1.reduce((a,b)=> a+b)
let arr2 = word2.reduce((a,b)=> a+b)
console.log(arr1 === arr2);
return arr1 === arr2
}

temp(["a", "cb"], ["ab", "c"]);
