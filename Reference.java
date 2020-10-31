class Shape
 {
double len;
double wid;
Shape(double a, double b)
{
len = a;
wid = b;
}
double area()
{
System.out.println("AREA CANNOT BE DEFINED!!");
return 0;
}
}

class Rectangle extends Shape
{
Rectangle(double a, double b)
{
super(a, b);
}
double area()
{
System.out.println("AREA OF RECTANGLE");
return (len * wid);
}
}

class Triangle extends Shape
{
Triangle(double a, double b)
{
super(a, b);
}
double area()
{
System.out.println("AREA OF TRIANGLE");
return ((len * wid) / 2);
}
}
class Reference
 {
   public static void main(String args[])
   {
Shape s = new Shape(10, 10);
Rectangle r = new Rectangle(9, 5);
Triangle t = new Triangle(10, 8);
Shape shps;
shps = r;
System.out.println("AREA IS " + shps.area());
shps = t;
System.out.println("AREA IS " + shps.area());
shps = s;
System.out.println("AREA IS " + shps.area());
}
}
