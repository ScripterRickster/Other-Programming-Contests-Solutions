#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;

int p[MAX];

int find(int x) {
    if (p[x] != x)
        p[x] = find(p[x]);
    return p[x];
}

bool unite(int x, int y) {
    int fx = find(x);
    int fy = find(y);
    if (fx == fy)
        return false;
    p[fx] = fy;
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i=1; i<=n; i++) p[i] = i;

    vector<int> result;
    for (int i=1; i<=m; i++) {
        int u, v;
        cin >> u >> v;
        if (unite(u,v)) {
            result.push_back(i);
        }
    }

    if (result.size() != n-1) {
        cout << "Disconnected Graph\n";
    } else {
        for (int idx : result)
            cout << idx << "\n";
    }

}
