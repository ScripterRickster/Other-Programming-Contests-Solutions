#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    if (nums.empty()) {
        cout << 0 << "\n";
        return 0;
    }

    vector<int> dp_arr(n,1);
    int m = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(nums[i] > nums[j]){
                dp_arr[i] = max(dp_arr[i],dp_arr[j]+1);
            }
        }
        m = max(m,dp_arr[i]);
    }
    cout << m << "\n";
}
