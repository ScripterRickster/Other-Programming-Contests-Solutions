#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<vector<int>> ppl;
  vector<string> books;

  int n,m;
  cin >> n >> m;

  for(int i=0;i<m;i++){
    int p1,p2;
    string doc;
    cin >> p1 >> p2;
    getline(cin,doc);
    getline(cin,doc);
    ppl.push_back(vector<int>{p1,p2});
    books.push_back(doc);
  }

  int you;
  cin >> you;

  for(int i=0;i<ppl.size();i++){
    if(ppl[i][1] == you){
      cout << books[i] << endl;
    }
  }
}
