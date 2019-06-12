#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int x,ant = 0,cont = 0; 
	for(int i = 1 ; i <= n ; ++i){
		cin >> x;
		if(x != ant){
			cont++;
			ant = x; 
		}
	}
	cout << cont << endl;
	
	return 0;

}
