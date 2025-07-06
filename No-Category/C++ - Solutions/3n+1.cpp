#include <bits/stdc++.h>
using namespace std;
int main() {
  int i;
  int n = 0;
  cin >> i;
  while(i!=1){
    if(i%2 == 1){
      i = (3*i)+1;
    }else if(i%2 == 0){
      i = i/2;
    };
    n += 1;
  };

  cout << n << endl;
}
