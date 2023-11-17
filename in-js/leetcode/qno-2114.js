function temp(sentences) {
    let max = 0
    for( let key in sentences){
        let word = sentences[key].split(' ')
        console.log(word);
        if(sentences[key].split(' ').length > max ) {
            max = sentences[key].split(' ').length 
        }
    }
    console.log(max);
    return max
}

temp(["alice and bob love leetcode", "i think so too", "this is great thanks very much"]);
