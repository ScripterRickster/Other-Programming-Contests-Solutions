#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main() {
  int words,count = 0;
  string w;
  cin >> words;
  for(int i=1;i<words+1;i++){
    cin >> w;
    if(w.length() <= 10){
      count+=1;
    }
  }

  cout << count << endl;
}
