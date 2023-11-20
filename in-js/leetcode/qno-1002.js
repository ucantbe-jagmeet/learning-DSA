function temp(words) {
    const result = []
    const firstWordArr = [...words[0]]
    for(const letter of firstWordArr) {
        if(words.every(word => word.includes(letter))) {
            result.push(letter)
        }
    }    
    console.log(result);
    return result
}

temp( ["bella","label","roller"]);
