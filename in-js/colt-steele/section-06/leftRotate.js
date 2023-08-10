function leftRotate(arr,n,d){
        //code here
        let popedElem = []
        for( let i =0; i<n-d;i++){
            let elem =arr.pop()
            popedElem.push(elem)
        }
        
        console.log([ ...popedElem.reverse(), ...arr.slice( 0,d) ])
    }
leftRotate( [1, 3, 4, 2], 4,3)