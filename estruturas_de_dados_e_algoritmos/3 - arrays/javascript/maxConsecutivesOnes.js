//https://leetcode.com/problems/max-consecutive-ones/description/

function maxConsecutiveOnes(nums) {
    let count = 0;
    let total = 0;

    for (let num of nums) {
        if (num == 1) {
            count++;
        }

        if (num == 0) {
            if (count > total) {
                total = count;
            }
            count = 0;
        }

    }
    return count > total ? count : total;
}

let nums = [1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1];

console.log(maxConsecutiveOnes(nums));