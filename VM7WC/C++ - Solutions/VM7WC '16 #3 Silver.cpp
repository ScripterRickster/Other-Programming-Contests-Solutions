#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	int n,m,a,b;
    cin >> n >> m >> a >> b;

    if(a==b){
        cout << "GO SHAHIR!" << endl;
        return 0;
    }

    vector<vector<int>> arr(n+1);
    vector<bool> vis(n+1,false);
   

    for(int i=0;i<m;i++){
        int r1,r2;
        cin >> r1 >> r2;
        arr[r1].push_back(r2);
        arr[r2].push_back(r1);
    }

    queue<int> q;
    q.push(a);
    vis[a] = true;

    bool yes = false;

    while(!q.empty() && !yes){
        int cr = q.front();
        q.pop();

        for(int ng:arr[cr]){
            if(ng == b){
                yes = true;
                break;
            }else{
                if(!vis[ng]){
                    vis[ng] = true;
                    q.push(ng);
                }
            }
        }
        
    }

    string res = yes == true ? "GO SHAHIR!" : "NO SHAHIR!";

    cout << res << endl;  

    






}
