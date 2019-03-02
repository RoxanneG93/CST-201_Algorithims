
// const reverseIt = (str) => {
//     // str = input;
//     revArray = [];
//     for (i = 0; i < str.length; i++) {
//         console.log(str[i]);
//         revArray.push(str[i]);
//         console.log(revArray);
//         revArray.
//     }
// }

// reverseIt("cat");


// calculate the sum of all numbers from 1 up to
// (and including) some number n;


// Solution1
const addUpTo = (n) => {
    let total = 0;
    for (let i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}


let test1 = performance.now();
console.log(addUpTo(1000000000)); // 15
let test2 = performance.now();
console.log(`Time Elapsed: ${(test2 - test1) / 1000} seconds.`)


// Solution2
const AddUpToN = (n) => {
    return n * (n + 1) / 2;
}

let t1 = performance.now();
console.log(AddUpToN(1000000000));
let t2 = performance.now();
console.log(`Time Elapsed: ${(t2 - t1) / 1000} seconds.`)


// ========== NOTES of BigO ==========

// f(n) could be LINEAR (f(n) = n ) - as n the input scales, the runtime scales also
// f(n) could be QUADRATIC (f(n) = n^2 ) - as n the input scales, the runtime scales also at the rate of n^2
// f(n) could be CONSTANT (f(n) = 1 ) - as n grows runtime is not impacted, always constant
//  or f{n} could be something entirely different.


const logAtLeast5 = (n) => {
    for (let i = 1; i <= Math.max(5, n); i++) {
        console.log(i);
    }
}
logAtLeast5(8);

// this would be considered O(n) since the loops will grow as n grows

const logAtMost5 = (n) => {
    for (let i = 1; i <= Math.min(n, 5); i++) {
        console.log(i);
    }
}

// this would be considered O(1) since the minimum would be constant with n