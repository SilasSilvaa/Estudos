function findNumbersWithEvenNumber(nums) {
    let oddNumber = 0;

    for (let num of nums) {
        let count = num.toString().length;
        if (count % 2 === 0) {
            oddNumber++;
        }
    }

    return oddNumber;
}

let nums = [555, 901, 482, 1771];

console.log(findNumbersWithEvenNumber(nums));