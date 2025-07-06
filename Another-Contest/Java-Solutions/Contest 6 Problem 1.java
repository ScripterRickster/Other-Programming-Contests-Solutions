import java.util.*;
public class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    String ans = "";

    String[] v = (input.nextLine()).split(" ");
    input.close();

    for(int i=0;i<v.length;i++){
      ans += v[i];
    }

    System.out.println(ans);

    
  }
}
