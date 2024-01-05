function temp(digits) {
    let rem = 1;
    for (let i = digits.length - 1; i >= 0; i--) {
        let temp = (digits[i] + rem);
        console.log(temp);
        digits[i] = temp % 10;
        rem = Math.floor(temp / 10);
    }
    return (rem == 0) ? digits : [rem].concat(digits);
}

console.log(temp([1, 2, 5]));