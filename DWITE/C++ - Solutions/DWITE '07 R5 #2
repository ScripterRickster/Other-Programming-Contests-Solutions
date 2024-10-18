#include <bits/stdc++.h>
using namespace std;


bool checkIfPrime(int n){
	int sNum = 2;
	while(sNum < n){
		if(n%sNum == 0){return false;}
		sNum++;
	}
	return true;
}

int getPrimeFactors(int n){
	int sNum = 2;
	int c = 0;
	while(sNum < n){
		if(checkIfPrime(sNum)){
			if(n%sNum == 0){
				c++;
				n = n/sNum;
			}else{
				sNum++;
			}
		}else{
			sNum++;
		}
		
	}
	return c;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	for(int z=0;z<5;z++){
		int n;
		cin >> n;
		int c = getPrimeFactors(n);
		if(c > 0){c++;}
		cout << c << "\n";
	}
}
