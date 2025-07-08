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

    int n, q;
    cin >> n >> q;

    for (int i=1; i<=n; i++) p[i] = i;

    for (int i=1; i<=q; i++) {
        char t;
        int u,v;
        cin >> t >> u >> v;
        if(t == 'A'){
            unite(u,v);
        }else if(t == 'Q'){
            if(find(u) == find(v)){
                cout << "Y" << "\n";
            }else{
                cout << "N" << "\n";
            }
        }
        
    }


}
