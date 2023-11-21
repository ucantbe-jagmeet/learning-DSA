function temp(words, s) {
    return words.map((item)=>item.charAt(0)).join("") === s
}

temp( ["alice","bob","charlie"], 'abc');
