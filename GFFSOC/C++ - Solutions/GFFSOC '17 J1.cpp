#include <iostream>
using namespace std;



int main() {
    int c,n,x;
    x = 0;
    cin >> c >> n;
    string course;
  
    
    
    for(int i=1;i<c+1;i++){
      cin>>course;
      if((course == "TOK") and (n>=1)){
          n-=1;
          x+=1;
      }else if((course == "English") and (n>=2)) {
          n -=2;
          x+=1;
      }else if((course == "Chemistry" ) and (n>=3)){
          n -=3;
          x+=1;
      }else if((course == "Math") and (n>=4)){
          n -=4;
          x+=1;
      }
    }
    
    if(x>=c){
        cout << "YEA BOI" << endl;
   
      
    }else{
        cout << "Go to Metro" << endl;
        cout<< x << endl;
    }
    //c = courses
    //n = number of ramen bowls
    //x = number of courses he can complete with the ramen bowls
}
