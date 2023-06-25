function getDigit(num,i){
    return Math.floor( Math.abs(num) / Math.pow( 10, i)) % 10
}

console.log( getDigit( 7323, 1));

//  (7323/ 100) % 10,