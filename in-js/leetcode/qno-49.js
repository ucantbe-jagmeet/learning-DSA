function temp(strs) {
    console.log(strs.map((item)=> item.split('').sort().join('')).sort());

}

temp( ["eat","tea","tan","ate","nat","bat"]);
