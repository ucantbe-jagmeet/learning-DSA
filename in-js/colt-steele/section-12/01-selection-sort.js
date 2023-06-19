function selectionSort(arr){

   for ( let i = 0; i < arr.length ; i++){

    let min = i

            for ( let j = i+1 ; j < arr.length ; j++){

                if( arr[j] < arr[min]){
                min = j
                }
            }
            // swap
             let temp = arr[i]
             arr[i] = arr[min]
             arr[min]= temp

   }
    return arr
}

console.log( selectionSort([ 19, 44, 38, 5, 47, 15]));