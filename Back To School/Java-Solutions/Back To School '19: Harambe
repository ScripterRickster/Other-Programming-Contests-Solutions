import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int replace = Integer.parseInt(input.nextLine());
    String[] words  = (input.nextLine()).split(" ");
    String wordreplace = input.nextLine();
    input.close();

    int index = 0;
    int diff = 101;

    boolean printed = false;

    for(int i=0;i<words.length;i++){
      if(words[i].length() == wordreplace.length() ){
        System.out.println(words[i]);
        printed = true;
        break;
      }else{
        if(wordreplace.length() - words[i].length() < diff && wordreplace.length() - words[i].length() > 0){
          index = i;
          diff = wordreplace.length() - words[i].length();
        }
      }
        
      
      
    }

    if(printed == false){
      System.out.println(words[index]);
    }
    
    
  }
}
