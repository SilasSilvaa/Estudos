import java.util.List;

public class FindTheSellerWithHighestSales {
    public static void main(String[] args) {
        var sellers = List.of(
                new Seller("Barry Allen", 18196.0),
                new Seller("Logan", 4255.0),
                new Seller("Maria", 10298.0),
                new Seller("Ana", 26485.0),
                new Seller("Aurora", 19982.0),
                new Seller("Noah", 15820.0),
                new Seller("Leo", 21412.0),
                new Seller("Alex", 12000.0));

        var result = findTheSellerHighestSales(sellers);
        System.out.println(result.toString());
    }

    private static Seller findTheSellerHighestSales(List<Seller> sellers) {
        int max = 0;
        int previous = 0;
        int i = 0;

        while (i < sellers.size()) {
            if (sellers.get(previous).ammount < sellers.get(i).ammount) {
                max = i;
                previous = max;
            }

            i++;
        }

        return sellers.get(max);
    }
}

class Seller {
    String name;
    Double ammount;

    public Seller(String name, Double ammout) {
        this.name = name;
        this.ammount = ammout;
    }

    public Seller() {

    }

    @Override
    public String toString() {
        return name + " " + ammount;
    }
}