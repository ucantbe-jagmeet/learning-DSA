// sum of natural number from 1287 = 1 + 2 + 8 + 7

function sumOfDigits(num) {

    let sum = 0

    while(num > 0){
        sum += num%10
        num = Math.floor(num /10)
    }

    return sum
}

console.log(sumOfDigits(1287))