// Write a function called isSubsequence which takes in two strings and checks whether the characters in the first string form a subsequence of the characters in the second string. In other words, the function should check whether the characters in the first string appear somewhere in the second string, without their order changing.
/*
Sample Input:
    isSubsequence('hello', 'hello world'); // true
    isSubsequence('sing', 'sting'); // true
    isSubsequence('abc', 'abracadabra'); // true
    isSubsequence('abc', 'acb'); // false (order matters)
*/

function isSubsequence(str1, str2){
    let curr = 0
    let next = 0

    while( next < str2.length){
        if(str2[next] === str1[curr]){
            curr++
            next++
        }
        else { next ++}
    }

    if( curr === str1.length) return true

    return false
}

console.log(isSubsequence("hello", "helol world"));