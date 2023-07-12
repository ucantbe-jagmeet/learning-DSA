function binarySearch( arr, num){

    let start = 0
    let end = arr.length -1 
    let mid = Math.floor(( start + end )/2)

    while( start <= end ){
        if( num === arr[mid])  return mid
        else if ( num < arr[mid]) {
            end = mid -1
        }
        else {
            start = mid + 1
        }
        mid = Math.floor(( start + end )/2)
    }
    return -1
}

console.log(binarySearch([ 2, 5, 6, 9, 13, 15, 28, 30], 1 ));