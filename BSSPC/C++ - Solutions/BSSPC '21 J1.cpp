#include <iostream>

using namespace std;

int main() {
  int s,x;
  cin >> s;
  cin >> x;

  s = ((s+2)*3)+16;
  if(s<=x){
    cout << "Yes it fits!" << endl;
  }else{
    cout << "No, it's too small :(" << endl;
  }
}
