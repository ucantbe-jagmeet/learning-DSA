function temp(details){
    
    return details.filter((item)=> item.slice(item.split('').length - 4, item.split('').length- 2) > 60).length
}

console.log(temp(["7868190130M7522","5303914400F9211","9273338290F4010"]));