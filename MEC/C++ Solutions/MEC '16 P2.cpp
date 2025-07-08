#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    string st, targ;
    cin >> st >> targ;

    string db = st + st;
    int position = -1;

    for (int i=0; i<N; i++) {
        bool match = true;
        for (int j=0; j<N; j++) {
            if (db[i+j] != targ[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            position = i;
            break;
        }
    }

    if (position == -1) {
        cout << -1 << endl;
    } else {
        int LS = position;
        int RS = N - position;
        if (LS <= RS) {
            cout << "L" << LS << "\n";
        } else {
            cout << "R" << RS << "\n";
        }
    }
}
