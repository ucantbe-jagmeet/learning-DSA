function insertionSort(arr){

    for( var i = 1; i < arr.length ; i++){

        var curr = arr[i]

        for( var j = i - 1; j >= 0 && arr[j] > curr ; j--){
            arr[j+1] = arr[j]
        }
        
        arr[j+1] = curr
    }
    return arr
}

console.log(insertionSort([ 3, 44, 38, 5, 47, 15]));

//  i , j , elem
//  0 , 1 , 1
//  0 , 2 , 2