function temp(words) {
 let result = [];
   for (let word of words) {
       let sortedWord = word.split('').sort().join('');
       if (result.length === 0 || result[result.length - 1].join('').split('').sort().join('') !== sortedWord) {
           result.push(word.split(''));
       }
   }
   return result.map(word => word.join(''));
}

temp(["abba","baba","bbaa","cd","cd"]);
