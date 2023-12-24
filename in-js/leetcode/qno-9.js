function temp(x) {
    return x === Number(x.toString().split('').reverse().join(''))

}

console.log(temp(121));