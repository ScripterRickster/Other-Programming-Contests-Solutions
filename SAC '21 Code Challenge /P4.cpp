#include <bits/stdc++.h>
using namespace std;


#define ll long long


ll inp[10000001];
ll psa[10000001];


int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,q;
    cin >> n >> q;

    psa[0] = 0;

    for(int i=0;i<n;i++){
        cin >> inp[i];
        psa[i+1] = psa[i] + inp[i];
    }


    for(int i=0;i<q;i++){
        ll l,r;
        cin >> l >> r;
        ll div = r-l+1;

        cout << (psa[r] - psa[l-1]) / div << "\n";
    }

    


}
