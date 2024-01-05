function temp(digits) {
    let num = BigInt(digits.join('')) + BigInt(1)
    console.log(num.toString().split(''));

}

console.log(temp([1, 2, 9]));