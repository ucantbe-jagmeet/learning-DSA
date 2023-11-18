function temp(s, left, right) {
   let vowel = ['a','e','i','o','u']
  let count = 0 
  for(let i = left ; i <= right ;i++){
      if(vowel.includes(s[i][0]) && vowel.includes(s[i][s[i].length -1])){
          count +=1
      }
  }  
  return count 

}

temp(["vo","j","i","s","i"], 0, 3);
