#include <bits/stdc++.h>
#include <vector>
using namespace std;
int n;
long long m;
vector<int> dmg;
int main() {
  cin>>n>>m;

  for(int i = 0; i<n; i++){
    dmg.push_back(0);
    cin>>dmg[i];
  }

  int rp = 0, lp = 0;
  long long sum = dmg[0];
  int mini = 500001;
  while (rp < n){
    if (sum >= m){
      mini = min(mini,rp-lp+1);
      sum -= dmg[lp];
      lp++;
    } else {
      rp++;
      if (rp == n){
        break;
      }
      sum += dmg[rp];
    }
  }
  if (mini == 500001){
    cout<<-1<<endl;
  }else{
    cout<<mini<<endl;
  }
  return 0;
}
