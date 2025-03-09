function removeDigits(str) {
    const regex = /\D/g;

    return str.replace(regex, "");
}

function removeDigits2(str) {
    let s = [];

    for (let i = 0; i < str.length; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            s.push(str[i]);
        }
    }

    return s.join("");
}

console.log(removeDigits2("123.123.123-12"))