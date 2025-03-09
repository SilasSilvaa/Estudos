//https://leetcode.com/problems/dot-product-of-two-sparse-vectors/description/

function dotProductTwoArrays(nums1, nums2) {

    let result = 0;
    let size = nums1.length;

    for (let i = 0; i < size; i++) {
        result += nums1[i] * nums2[i];

    }

    return result;
}

let nums1 = [1, 0, 0, 2, 3];
let nums2 = [0, 3, 0, 4, 0];

let nums3 = [0, 1, 0, 0, 0];
let nums4 = [0, 0, 0, 0, 2];

let nums5 = [0, 1, 0, 0, 2, 0, 0];
let nums6 = [1, 0, 0, 0, 3, 0, 4];

console.log(dotProductTwoArrays(nums1, nums2));
console.log(dotProductTwoArrays(nums3, nums4));
console.log(dotProductTwoArrays(nums5, nums6));