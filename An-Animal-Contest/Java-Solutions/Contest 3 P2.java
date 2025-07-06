import java.util.*;
public class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);

    String[] constraints = input.nextLine().split(" ");
    int k,d;
    k = Integer.parseInt(constraints[0]);
    d = Integer.parseInt(constraints[1]);

    String[] digitinputs = input.nextLine().split(" ");
    input.close();

    ArrayList<Integer> digits = new ArrayList<Integer>();
    for(int i=0;i<digitinputs.length;i++){
      digits.add(Integer.parseInt(digitinputs[i]));
    }

    Collections.sort(digits);

    if(d == 1 && digits.get(0) == 0){
      System.out.println("-1");
    }else{
      int beginindex = 0;
      int smallestdigit = digits.get(0);
      for(int i=0;i<digits.size();i++){
        if(digits.get(i) > 0){
          beginindex = i;
          break;
        }
      }
      System.out.print(digits.get(beginindex));
      if(k>1){
        if(k>2){
          for(int i=0;i<k-2;i++){
          System.out.print(smallestdigit);
          }
          System.out.print(digits.get(beginindex));
        }else if(k == 2){
          System.out.print(beginindex);
        }
        
      }
      System.out.print("\n");
      
    }
  }
}
