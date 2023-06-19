// bubble sort loop always run to check big elemens if there are sorted elements in an array

const arr = [ 8, 1, 2, 3, 4, 5, 6, 7]

function bubbleSort(arr){

    var noSwaps;

    for( let i = arr.length  ; i > 0 ; i--){

        noSwaps = true

        for( let j = 0; j < i-1 ; j++){

                console.log( arr, arr[j], arr[j+1]);

                if( arr[j] > arr[j+1]){

                    // Swapping numbers
                        let temp = arr[j]
                        arr[j] = arr[j+1]
                        arr[j+1] = temp
                        noSwaps = false
                }
            }
        if(noSwaps) break
    }
    return arr
}

console.log( bubbleSort(arr));