#include <bits/stdc++.h>
using namespace std;

bool is_vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

bool read(string word) {

	if(word.length() == 1){
		if(is_vowel(word[0])){
			return true;
		}else{
			return false;
		}
	}
    int vwls = 0, cons = 0;

  
    for (char c : word) {
        if (is_vowel(c)) {
            vwls++;
        } else {
            cons++;
        }
    }
    return abs(vwls - cons) <= 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string n;
    getline(cin, n);
    transform(n.begin(),n.end(),n.begin(),::tolower);

    stringstream ss(n);
    string word;
    
    while (ss >> word) {
        if (!read(word)) {
            cout << "not readable" << endl;
            return 0;
        }
    }

    cout << "readable" << endl;
}
