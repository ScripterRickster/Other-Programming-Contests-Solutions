#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    vector<int> l(n);
    
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    
    int td = 0;
    int i = 0;
    bool madeit = false;
    
    while (i < n-1) {
        int next = -1;
        for (int j=1;j<=k; j++) {
            if (i + j < n && l[i+j] == 1) {
                next = i+j;
            }
        }
        if (next == -1) {
            break;
        }
        i = next;
        td++;
        if (i == n - 1) {
            madeit = true;
            cout << td << endl;
            return 0;
        }
    }
    
    if (!madeit) {
        cout << -1 << endl;
    }
    return 0;
}
