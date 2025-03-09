import java.util.ArrayList;
import java.util.List;

class Transactions {

    public static void main(String[] args) {
        System.out.println(invalidTransactions(new String[] { "alice,20,800,mtv", "alice,50,100,beijing" }));
        System.out.println(invalidTransactions(new String[] { "alice,20,800,mtv", "alice,50,1200,mtv" }));
        System.out.println(invalidTransactions(new String[] { "alice,20,800,mtv", "bob,50,1200,mtv" }));
    }

    private static List<String> invalidTransactions(String[] arr) {
        class Transaction {
            String name;
            int time;
            int amount;
            String city;

            public Transaction(String csv) {
                String[] parts = csv.split(",");

                this.name = parts[0];
                this.time = Integer.parseInt(parts[1]);
                this.amount = Integer.parseInt(parts[2]);
                this.city = parts[3];
            }
        }

        List<String> results = new ArrayList<>();
        boolean[] invalidArr = new boolean[arr.length];

        for (int i = 0; i < arr.length; i++) {
            Transaction ti = new Transaction(arr[i]);

            if (ti.amount > 1000) {
                invalidArr[i] = true;
            }

            for (int j = i + 1; j < arr.length; j++) {
                Transaction tj = new Transaction(arr[j]);

                if (ti.name.equals(tj.name) && Math.abs(ti.time - tj.time) <= 60 && !ti.city.equals(tj.city)) {
                    invalidArr[i] = true;
                    invalidArr[j] = true;
                }
            }
        }

        for (int i = 0; i < arr.length; i++) {
            if (invalidArr[i]) {
                results.add(arr[i]);
            }
        }

        return results;
    }
}