public class Main {  
   public static void main(String[] args) {
   
      final int LOWERBOUND = 1;     
      final int UPPERBOUND = 10; 
      int product = 1; 
      int number = LOWERBOUND;
      while (number <= UPPERBOUND) {
            
         product = product * number;  
         ++number;            
      }
      
      System.out.println("The sum from " + LOWERBOUND + " to " + UPPERBOUND + " is " + product);
   }
}
