// sum of natural number from 1 to n

function sum(num) {

    // Step 1 
    // let sum = 0 
    // for (let i = 1; i <= num ;i++){
    //     sum += i
    // } 
    // return sums

    // step 2
    return (num * (num + 1)) / 2
}

console.log(sum(6))