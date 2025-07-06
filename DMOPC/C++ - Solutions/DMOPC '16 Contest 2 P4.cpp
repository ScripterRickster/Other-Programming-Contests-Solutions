#include <bits/stdc++.h>

using namespace std;

long long getZeros(long long num){
    //num/5 + num/25 + num/125 ...
    long long ans = 0;
    while (num > 0){
        ans += num/5;
        num /= 5;
    }
    return ans;
}

long long a,b;

int main() {
    //std::ostream::sync_with_stdio(false); cin.tie(nullptr);

    cin >> a >> b;
    long long first,last; //last-first+1
    //binary search for first
    long long lo = 1, hi = 5000000000,mid;
    while (hi > lo){
        mid = (lo+hi)/2;
        if (getZeros(mid) < a){
            lo = mid+1;
        } else {
            hi = mid;
        }
    }
    first = hi;

    //binary search for last
    lo = 1, hi = 5000000000;
    while (hi > lo){
        mid = (lo+hi+1)/2;
        if (getZeros(mid) <= b){
            lo = mid;
        } else {
            hi = mid-1;
        }
    }
    last = lo;
    cout << last-first +1;

    return 0;
}
