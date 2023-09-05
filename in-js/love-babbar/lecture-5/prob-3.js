function findresult(str) {
  let collection = {};

  for (let key in str) {
    collection[str[key]] = (collection[str[key]] || 0) + 1;
  }

  const values = Object.values(collection);

  if (values.every((val) => val === values[0])) {
    return true;
  }

  for (let i = 0; i < values.length; i++) {
    let reducedValues = values.slice(0);
    reducedValues[i]--;

    if (
      reducedValues.every((freq) => freq === reducedValues[0] || freq === 0)
    ) {
      return true;
    }
  }

  return false;
}

console.log(findresult("xyyz"));
