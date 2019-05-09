#include <bits/stdc++.h>


using namespace std;

int main(){
	int n;
	bool flag = true;
	cin >> n;
	int cont = 0;
	for(int i = 1 ; ; ++i){
		flag = !flag;
		cont += i;
		if(cont < n){
			cont += i*2;
			flag = !flag;
		}
		if(cont >= n)
			break;
	}
	cout << ( flag ? "Motu" : "Patlu" ) << '\n';

	return 0;
}

