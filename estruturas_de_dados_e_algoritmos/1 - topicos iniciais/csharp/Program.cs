namespace Course 
{
    internal class Program 
    {

        static double total(Product product)
        {
            return Product.Price * Product.Quantity;
        }

        static void updatePrice(Product product, Double percentage)
        {
            Product.Price = Product.Price * (1.0 + percentage / 100.0);
        }

        static void Main(String[] args)
        {
            var p1 = new Product("P1", 1000.0, 5);
            Console.WriteLine(p1);
            Console.WriteLine(total(p1));
            Console.WriteLine(updatePrice(p1, 10));

            p1.total();
            p1.updatePrice();
        }
    }

    class Product
    {
        public string Name { get; set; }
        public double Price { get; set; }
        public int Quantity { get; set; }

        public Product(string name, double price, int Quantity ) {
            this.Name = name;
            this.Price = price;
            this.Quantity = Quantity;
        }

        public double total()
        {
            return this.Price * this. Quantity;
        }

        public void updatePrice(Double percentage)
        {
            this.Price = this.Price * (1.0 + percentage / 100.0);
        }

        public override string ToString()
        {
            return Name + ", " + Price + ", "   + Quantity;
        }
    }
}