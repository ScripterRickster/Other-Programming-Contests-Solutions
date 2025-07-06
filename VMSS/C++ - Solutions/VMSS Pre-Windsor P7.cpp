#include <bits/stdc++.h>

using namespace std;

int compare(const string& a, const string& b) {
    // comp by length 
    if (a.length() != b.length()) {
        return a.length() < b.length() ? -1 : 1;
    }
    // comp by char val
    for (int i = 0; i < a.length(); i++) {
        if (a[i] != b[i]) {
            return a[i] < b[i] ? -1 : 1;
        }
    }
    return 0;
}

int main() {

  string ans = "";

  int n; 
  cin >> n;
  vector<string> nums;
  for(int i=0;i<n;i++){
    string k;
    cin >> k;
    nums.push_back(k);
  };

  // sorting

 sort(nums.begin(), nums.end(), [](const string& a, const string& b){
      return a + b > b + a; 
  });

  for (auto s : nums) {
      ans += s; 
  };



  cout << ans << endl;
}
