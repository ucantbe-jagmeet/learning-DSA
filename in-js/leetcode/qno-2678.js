function temp(details){
    
    return details.filter((item)=> parseInt(item.substring(11,13)) > 60).length
}

console.log(temp(["7868190130M7522","5303914400F9211","9273338290F4010"]));