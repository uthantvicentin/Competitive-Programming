#include <bits/stdc++.h>

using namespace std;

int fat(int n){
	if(n == 0 || n == 1)
		return 1;
	return n*fat(n-1);
	}


int main(){
	int n;
	cin >> n;
	cout << fat(n) << '\n';

	return 0;
}

