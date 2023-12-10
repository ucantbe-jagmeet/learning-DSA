function temp(words){
    return words.filter(n => words.some(h => h !== n && h.includes(n)));

}

console.log(temp(["mass","as","hero","superhero"]));