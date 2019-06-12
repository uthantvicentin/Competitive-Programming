#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a;
	cin >> n;
	int x[n+1];
	for(int i = 1 ; i <= n ; ++i){
		cin >> a;
		x[a] = i;
	}	
	for(int i = 1 ; i <= n ; ++i)
		cout << x[i] << ' ';
	cout << endl;
	return 0;
}

/*
	 4
	 1 2 3 4
	 2 3 4 1

	 4 3 2 1

	 4 1 2 3

	 1 3 2


 */
