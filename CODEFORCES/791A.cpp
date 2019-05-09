#include <bits/stdc++.h>

using namespace std;

int main(){
	int cont = 0, a, b;
	cin >> a >> b;
	while(a <= b){
		cont ++;
		a*=3;
		b*=2;
	}
	cout << cont << '\n';
	return 0;
}

