#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	char x;
    int t=0,c=1;
    cin >> x >> t;

    bool count[26] = {false};
    count[x-'A'] = true;

    for(int i=0;i<t;i++){
        char p1,p2;
        cin >> p1 >> p2;
        if(x==p2){
            x = p1;
            if(!count[x-'A']){
                count[x-'A'] = true;
                c++;
            }
        }
    }
    cout << x << "\n" << c << endl;

}
