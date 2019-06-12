#include <bits/stdc++.h>

using namespace std;

int main(){
 	int n;
	cin >> n;
	int m[n+5][n+5];
	
	for(int i = 1 ; i <= n ; ++i)
		for(int j = 1 ; j <= n ; ++j)
			cin >> m[i][j];
	
	int	soma = 0;
	
	for(int i = 1 ; i <= n ; ++i)
		soma += m[i][n/2 +1];

	for(int i = 1 ; i <= n ; ++i)
		soma += m[n/2 +1][i];	

	for(int i = 1 ; i <= n ; ++i)
		soma +=m[i][i];
	
	for(int i = 1 ; i <= n ;++i)
		soma += m[i][n-i+1];

	int dif = m[n/2 + 1][n/2 + 1];
	dif *= 3;
	soma -=dif;

	cout << soma << '\n';


	
	return 0;
}
