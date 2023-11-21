var splitWordsBySeparator = function(words, separator) {
    let arr =[]
    words.map((item)=> arr.push(...item.split(separator).filter((item) => item !== "")))
    return arr
}

console.log(splitWordsBySeparator(["$easy$","$problem$"],"$"));