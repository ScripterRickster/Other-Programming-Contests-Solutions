import java.math.*;
import java.util.*;
public class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    BigInteger ans = new BigInteger("1");
    String[] v = (input.nextLine()).split(" ");
    input.close();

    for(int i=0;i<v.length;i++){
      if(i == 0){
        ans = new BigInteger(v[i]);
        i = i+1;
      }
      ans = ans.pow(Integer.parseInt(v[i]));
    }

    System.out.println(ans);

    
  }
}
