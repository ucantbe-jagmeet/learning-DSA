// Write a recursive function called capitalizeFirst. Given an array of strings, capitalize the first letter of each string in the array.

// capitalizeFirst(['car','taco','banana']); // ['Car','Taco','Banana']

function capitalizeFirst(arr){
 
  if(arr.length ===1) return [arr[0].toUpperCase()]
  console.log(arr);
  let result = capitalizeFirst(arr.slice(0,-1))
  result.push(arr.slice(arr.length-1)[0].toUpperCase())
  return result
}


console.log(capitalizeFirst(['car','taco','banana','tomato', 'pizza']))
