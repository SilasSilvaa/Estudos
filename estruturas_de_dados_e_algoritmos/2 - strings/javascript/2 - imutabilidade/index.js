let str = "Hello world!";
let arr = str.split("");
arr[7] = '7';
str = arr.join("");

console.log(str);