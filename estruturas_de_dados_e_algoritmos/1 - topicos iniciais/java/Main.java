public class Main {
    public static void main(String[] args){
        Product p1 = new Product("p1", 1000.0, 3);

        System.out.printl(total(p1));
        System.out.printl(updatePrice(p1));
        System.out.printl(p1);
    }
}

public class Product {
    private String name;
    private Double price;
    private Integer quantity; 

    public Product(String name, Double price, Integer quantity){
        this.name = name;
        this.price = price;
        this.quantity = quantity;
    }

    @Override
    public String toString(){
        return this.name + ", " + this.price ", " + this.quantity;
    }

    public Double total(){
        return this.price * this.quantity;
    }   

    public void updatePrice(Double percentage){
        this.price += this.price * percentage;
    }

    public String getName(){
        return this.name;
    }

    public void setName(String name){
        this.name = name;
    }

    public Double getPrice(){
        return this.price;
    }

    public void setPrice(Double price){
        this.price = price;
    }

    public Integer getQuantity(){
        return this.quantity;
    }

    public void setQuantity(Integer quantity){
        this.quantity = quantity;
    }
}

private static Double total(Product product){
    return product.getPrice() * product.getQuantity();
}

private static Double updatePrice(Product product, Double percentage){
    return product.getPrice() += product.getPriceO() * percentage;
}