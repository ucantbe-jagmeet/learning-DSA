function temp(strs) {
    let arr = []

    for (let key of strs) {
        let num = key.split('').reduce((a, b) => {
            let number = parseInt(b)
            if (!isNaN(number)) { a += number }
            return a
        }, 0)

        key.length > num ? arr.push(key.length) : arr.push(num)
    }

    return Math.max(...arr)
}

console.log(temp(["alic3", "bob", "3", "4", "00000"]));