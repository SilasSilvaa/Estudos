namespace Course 
{
    internal class PrimitiveType
    {
        struct Point {
            public double X;
            public double Y;

            public override string ToString()
            {
                return X + " " + Y;
            }
        }

        static void Main(String[] args)
        {
            Point p;
            p.X = 10;
            p.Y = 20;

            Console.WriteLine(p);
        
            p = new Point();
            Console.WriteLine(p);
        
        }
    }
}