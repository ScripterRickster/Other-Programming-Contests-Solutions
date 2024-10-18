#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i*i <= n; i+=6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool isPalindrome(int n) {
    string s = to_string(n);
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int main() {
	for(int k=0;k<5;k++){
        int a, b;
        cin >> a >> b;
        int count = 0;

        for (int i = a; i <= b; i++) {
            if (isPrime(i) && isPalindrome(i)) {
                count++;
            }
        }

        cout << count << endl;
	}
    return 0;
}
