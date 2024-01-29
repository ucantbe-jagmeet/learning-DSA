function temp(s) {
    let arr = []
    let obj = {
        '(': ')',
        '[': ']',
        '{': '}'
    }

    for (let x of s) {
        if (x in obj) {
            arr.push(x)
        } else {
            let a = arr.pop()
            if (obj[a] != x) {
                return false
            }
        }
    }
    return arr.length === 0
}

console.log(temp("()[]{}"));