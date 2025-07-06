import java.util.*;
import java.lang.Math;

public class Main {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    int t;
    t = Integer.parseInt(input.nextLine());

    for(int a=0;a<t;a++){
      int x;
      x = Integer.parseInt(input.nextLine());
      ArrayList<Integer> factors = new ArrayList<Integer>();
      while (x%2 == 0){
      factors.add(2);
      x/= 2;
      }

      for (int i = 3; i <= Math.sqrt(x); i += 2) {
      while (x % i == 0) { 
        factors.add(i);
        x /= i; 
      } 
    } 
      if (x > 2){
        factors.add(x);
      }
      Collections.sort(factors);

      for(int i=0;i<factors.size();i++){
        System.out.print(factors.get(i) + " ");
      }
      System.out.print("\n");
      
   }
    input.close();
    
}
}
