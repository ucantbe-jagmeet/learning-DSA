function temp(words, x){
    let arr = []
   words.filter((word, index)=> word.split('').includes(x) ? arr.push(index): '')

   return arr
}

console.log(temp(["abc","bcd","aaaa","cbc"],'a'));