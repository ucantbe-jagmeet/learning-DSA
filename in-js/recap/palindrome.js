function isPalindrome(num){
    if(num < 0) return false

    let originalNum = num 
    let reversed = 0

    while(num > 0){
        let digit = num % 10

        reversed = reversed  * 10 + digit
        num = Math.floor(num / 10)
    }

    return originalNum === reversed
}
const num = 8789878
console.log("Number", num, "is palindrome ?", isPalindrome(num))