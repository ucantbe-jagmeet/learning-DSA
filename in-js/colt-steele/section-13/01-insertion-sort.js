function insertionSort(arr){

    for( var i = 1; i < arr.length ; i++){

        var curr = arr[i]

        for( var j = i - 1; j >= 0 && arr[j] > curr ; j--){
            arr[j+1] = arr[j]  // copying first element to second
        }
        
        arr[j+1] = curr
    }
    return arr
}

console.log(insertionSort([ 2, 1, 9, 76, 4]));

//  i , j , curr
//  1 , 0 , 0
//  0 , 2 , 2