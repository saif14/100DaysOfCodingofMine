//memoization


const fib = (n, memo = {}) => {
    if (n in memo) return memo[n];
    if (n <= 2) return 1;
    memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
    return memo[n];
}

console.log(fib(50));

// const prompt = require('prompt-sync')();

// var fname = prompt("Enter fnam: ");
// var lname = prompt("Enter lnase: ");
// console.log("Your full name is: ", fname, lname);