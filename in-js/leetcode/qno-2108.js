function temp(words) {
    for( let key in words){
        let revStr = words[key].split('').reverse().join('')
        if(revStr === words[key]) return words[key]
    }
    return ""
}

temp(["abc","car","ada","racecar","cool"]);
