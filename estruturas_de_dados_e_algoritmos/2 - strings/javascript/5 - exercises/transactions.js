const transactions = ["alice,20,800,mtv", "alice,50,100,beijing"];

function Transactions(csv) {
    const part = csv.split(",");

    this.name = part[0];
    this.time = Number(part[1]);
    this.amount = Number(part[2]);
    this.city = part[3];
}

function invalidTransactions(transactions) {
    const result = [];
    const arr = new Array(transactions.length).fill(false);

    for (let i = 0; i < transactions.length; i++) {
        const ti = new Transactions(transactions[i]);

        if (ti.amount > 1000) {
            arr[i] = true;
        }

        for (let j = i + 1; j < transactions.length; j++) {
            const tj = new Transactions(transactions[j]);

            if (ti.name === tj.name) {
                if (((Math.abs(ti.time - tj.time) <= 60) && (ti.city !== tj.city))) {
                    arr[i] = true;
                    arr[j] = true;
                }
            }
        }
    }

    for (let i = 0; i < transactions.length; i++) {
        if (arr[i]) {
            result.push(transactions[i]);
        }
    }


    return result;
}


console.log(invalidTransactions(transactions));