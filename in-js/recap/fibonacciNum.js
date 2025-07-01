/// Fib(5) = 0 1 1 2 3 

function Fib(n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    let prev = 0, curr = 1;

    while (n > 1) {
        sum = prev + curr;
        prev = curr;
        curr = sum;
        n--;
    }
    return sum;
}

const num = 5
console.log(Fib(3))

// step     n    prev     curr     sum
// 0        5      0        1       1
// 1        4      1        1       1 
// 2        3      1        2       2
// 3        2      2        3       3