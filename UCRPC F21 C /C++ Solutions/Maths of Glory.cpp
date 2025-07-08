// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n,m;
    cin >> n >> m;

    int t1=n,t2=n;
    int r = 0;
    for(int i=0;i<m;i++){
        r = i+1;
        int a,b,c,d;
        cin >> a >> b >> c >> d;


        t1 -= (c*d);
        t2 -= (a*b);

        if(t1 <= 0 && t2 > 0){
            cout << "Team 2 wins at round " << r << "!\n";
            return 0;
        }else if(t2 <= 0 && t1 > 0 ){
            cout << "Team 1 wins at round " << r << "!\n";
            return 0;
        }else if(t2 <= 0 && t1 <= 0){
            cout << "It's a tie at round " << r << "!\n";
            return 0;
        }
        
    }
    cout << "Oh no!" << "\n";


   

}
