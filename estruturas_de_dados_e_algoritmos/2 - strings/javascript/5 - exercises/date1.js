function extractDateData(date) {
    const parts = date.split("/");

    const day = Number(parts[0]);
    const month = Number(parts[1]);
    const year = Number(parts[2]);

    return { day, month, year }
}

const obj = extractDateData("21/07/2010");

console.log(`Dia: ${obj.day}`);
console.log(`Month: ${obj.month}`);
console.log(`Year: ${obj.year}`);