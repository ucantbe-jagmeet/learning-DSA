function sort(arr1, arr2){
    let first = 0
    let second = 0
    let arr = []
    while( first < arr1.length  && second < arr2.length){ 
        if(arr1[first] < arr2[second]){
            arr.push(arr1[first])
            first++
        } else  {
            arr.push(arr2[second])
            second++
        } 
    }
    while( first < arr1.length){
        arr.push(arr1[first])
        first++
    }
    while( second < arr2.length){
        arr.push(arr2[second])
        second++
    }
    return arr
}



function mergeSort(arr){
    if( arr.length <= 1) return arr
    let mid = Math.floor( arr.length / 2)
    let left = mergeSort(arr.slice(0 , mid))
    let right = mergeSort(arr.slice(mid))

    console.log(left );
    return sort( left, right)
}

console.log(mergeSort([1, 10, 50, 14, 122, 99, 100, 2, 130 ]));