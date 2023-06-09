// Write a function called averagePair. Given a sorted array of integers and a target average, determine if there is a pair of values in the array where the average of the pair equals the target average. There may be more than one pair that matches the average target. \

/*
Sample Input:
    averagePair([1,2,3],2.5) // true
    averagePair([1,3,3,5,6,7,10,12,19],8) // true
    averagePair([-1,0,3,4,5,6], 4.1) // false
    averagePair([],4) // false
*/

function averagePair(arr, num){

    if(!arr.length) return false

    let curr = 0
    let end = arr.length -1

    while( curr <end){
        if((arr[curr]+arr[end]) === num) return true 
        else if((arr[curr]+arr[end]) > num ){
            end--
        }
        else{
            curr++
        }
    }

    return false
}

const arr = [-1,0,3,4,5,6]
console.log(averagePair(arr, 4.1));