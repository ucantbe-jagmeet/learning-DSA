function temp(words) {
    let newSet = new Set()
    for ( let word of words){

        let str = word.split('').sort().join('')
        if( !newSet.has(str)) newSet.add(str)
    }

    console.log(newSet);

}

temp(["abba","baba","bbaa","cd","cd"]);
