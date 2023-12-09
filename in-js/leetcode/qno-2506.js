function temp(words){
    let newSet = new Set()
    let count = 0
    for ( let i =0; i < words.length; i++){
        let word = Array.from(new Set(words[i].split('').sort())).join('')
        newSet.has(word) ?  count++ : newSet.add(word)
    }
    return count
}

console.log(temp(["aabb","ab","ba"]));