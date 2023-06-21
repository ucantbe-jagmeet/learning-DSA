function example(str){
    let result = {}
    for (let i = 0; i < str.length; i++) {
        result[str[i]] = (  result[str[i]] || 0) + 1
    }
    return result
}

console.log(example('aabbbcc'));