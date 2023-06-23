// pivot ([ 4, 8, 2, 1, 5, 7, 6,3])

function swap( arr, i, j){
    let temp = arr[i]
    arr[i] == arr[j]
    arr[j] = temp
}

function pivot( arr, start =0 , end = arr.length -1){
    let pivot = arr[start]
    var swapIndex = start

   for( let i = start + 1 ; i <= end; i++){

        if( pivot > arr[i]){
            swapIndex ++
            swap( arr, swapIndex, i)
        }
    }
    swap( arr, start, swapIndex)

    return swapIndex
}

console.log( pivot([ 9,4, 8, 2, 1, 5, 7, 6, 3]));