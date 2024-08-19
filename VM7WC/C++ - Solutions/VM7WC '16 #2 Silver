#include <bits/stdc++.h>
using namespace std;
int main() { 
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string ggV2;
  cin >> ggV2;
  vector<int> ggVec;
  for(int i=0;i<ggV2.size();i++){
    if (ggV2[i] == 'G'){
      if(i == 0){
        ggVec.push_back(1);
      }else{
        ggVec.push_back(ggVec[i-1]+1);
      }
    }else{
      if(i == 0){
        ggVec.push_back(0);
      }else{
        ggVec.push_back(ggVec[i-1]);
      }
    }
  }
  int x;
  cin >> x;
  for(int i=0;i<x;i++){
    int r1,r2;
    cin >> r1 >> r2;
    cout << (ggVec[r2] - ggVec[r1-1]) << endl;
  }
}
