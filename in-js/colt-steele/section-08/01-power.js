function power(num1, num2){
    if(num2 === 1){
        return num1
    }
    return num1*power(num1, --num2)

}

console.log(power(2,3));