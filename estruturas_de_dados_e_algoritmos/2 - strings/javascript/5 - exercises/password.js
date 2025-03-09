function validatePassword(str) {

    const regex = /^(?=.*[a-zA-z])(?=.*\d)(?=.*[@&#]).{8,}$/;

    return regex.test(str);
}

console.log(validatePassword("asdasdas@1"))
console.log(validatePassword("asdasdasasda1"))