function factorial(num){
    if(num === 0){
        return 1
    }
    return num*factorial(--num)
}

console.log(factorial(8));