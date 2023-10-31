function temp(words1, words2) {
    let collection1 = {};
   let collection2 = {};
	let result = 0 

    for (let key in words1) {
      collection1[words1[key]] = (collection1[words1[key]] || 0) + 1;
    }

    for (let key in words2) {
      collection2[words2[key]] = (collection2[words2[key]] || 0) + 1;
    }

	for(let key in collection1){
       if(collection2.has(collection1[key]) && collection1[collection1[key]] === 1){
           result +=1;
       }
   }
   console.log(result);
   return result;
}

temp(["leetcode", "is", "amazing", "as", "is"], ["amazing", "leetcode", "is"]);
