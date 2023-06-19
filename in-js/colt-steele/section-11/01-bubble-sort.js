
const arr = [ 2, 4, 1, 66, 10, 3, 55, 23]

function swapNum(arr, num1 , num2){
    let temp = arr[num1]
    arr[num1] = arr[num2]
    arr[num2] = temp
}

function bubbleSort(arr){

    for( let i = arr.length  ; i > 0 ; i--){
        for( let j = 0; j < i-1 ; j++){

            console.log( arr, arr[j], arr[j+1]);
            if( arr[j] > arr[j+1]){
                
                // Swapping numbers
                let temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
            }
        }
    }
    return arr
}

console.log( bubbleSort(arr));