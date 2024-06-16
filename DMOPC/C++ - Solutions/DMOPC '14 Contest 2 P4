#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {

    int N;
    cin >> N;
    vector<long long> treesums(N+1, 0);
    for(int i = 1; i <= N; i++) {
        cin >> treesums[i];
        treesums[i] += treesums[i-1];
    }

    int Q;
    cin >> Q;
    for(int i=0;i<Q;i++){
        int a, b;
        cin >> a >> b;
        cout << treesums[b+1] - treesums[a] << "\n";
    }
}
