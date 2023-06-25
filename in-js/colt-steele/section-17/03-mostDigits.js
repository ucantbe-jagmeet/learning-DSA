function digitCount(num){
    if(num===0) return 1
    return Math.floor(Math.log10(Math.abs(num))) + 1
}

function mostDigits(nums){
    let maxDigits = 0
    for( let i =0; i < nums.length; i++){
        maxDigits = Math.max( maxDigits, digitCount( nums[i]))
    }
    return maxDigits
}

console.log( mostDigits([2, 100]));

// mostDigits([ 1234, 56, 7]) // 4
// mostDigits([ 111, 11111, 1]) // 5