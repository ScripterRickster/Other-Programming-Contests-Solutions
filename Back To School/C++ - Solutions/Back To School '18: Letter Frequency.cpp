#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAXN = 1e6+1;
int psa[MAXN][27];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin,s);
    int q;
    cin >> q;

    for (int i=0;i<s.length();i++) {
        int idx = (int)s[i]-'a';

        for (int j=0;j<26;j++) {
            psa[i+1][j] = psa[i][j];
        }

        if (idx >= 0 && idx < 26) {
            psa[i+1][idx]++;
        }
    }

    for (int i=0;i<q;i++) {
        int a,b;
        char x;
        cin >> a >> b >> x;
        int idx = (int)x-97;
        cout << psa[b][idx] - psa[a-1][idx] << "\n";
    }
}
