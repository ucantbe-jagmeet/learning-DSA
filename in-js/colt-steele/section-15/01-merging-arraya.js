function sort(arr1, arr2){
    let first = 0
    let second = 0
    let arr = []
    while( first < arr1.length  && second < arr2.length){ 
        console.log(first ,second);
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

console.log(sort([ 1, 10, 50, 122, 130,168 ], [ 2, 14, 99, 100 ]));