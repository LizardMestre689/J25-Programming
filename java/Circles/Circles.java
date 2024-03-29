public class Circle {  // Save as "Circle.java"
   // private instance variable, not accessible from outside this class
   private double radius;
   private String color;
   
   // Constructors (overloaded)
   /** Constructs a Circle instance with default value for radius and color */
   public Circle() {  // 1st (default) constructor
      radius = 1.0;
      color = "red";
   }
   
   /** Constructs a Circle instance with the given radius and default color */
   public Circle(double r) {  // 2nd constructor
      radius = r;
      color = "red";
   }
    
   public Circle (double r, String c){
       radius = r;
       color = c;
   }
   
   /** Returns the radius */
   public double getRadius() {
     return radius; 
   }
   
   /** Returns the area of this Circle instance */
   public double getArea() {
      return radius*radius*Math.PI;
   }
}

// Solution

Circle circle1 = new Circle();
Circle c2 = new Circle(5);
Circle c3 = new Circle(10, "green");
Circle colinRobinson = new Circle(-2.0, "greenish");
Circle circle5 = new Circle(1.0, "blue");


