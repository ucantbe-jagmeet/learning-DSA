function temp(words) {
        let obj = {};
    let diff = [];

    words.forEach(word => {
        let arr = [];
        for (let i=0; i< word.length -1;i++) {
            arr.push((word.charCodeAt(i+1) - 97) - (word.charCodeAt(i) - 97));
        }
        diff.push(arr.toString());
    });

    for (let i=0 ;i< diff.length;i++) {
        if(!obj[diff[i]]) {
            obj[diff[i]] = 1;
        } else {
            obj[diff[i]] = obj[diff[i]] +1;
        }
    }
   
   for (key in obj) {
       if(obj[key] === 1) {
           return words[diff.indexOf(key)];
       }
   }
};

temp( ["adc","wzy","abc"])