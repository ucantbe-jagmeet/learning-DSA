function temp(words, x){
   return words
        .map((word, index) => word.includes(x) ? index : undefined)
        .filter(index => index !== undefined);
}

console.log(temp(["abc","bcd","aaaa","cbc"],'a'));