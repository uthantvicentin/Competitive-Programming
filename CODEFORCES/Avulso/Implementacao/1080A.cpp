#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;

	int	r = ((n * 2) + k - 1) /k + ((n*5) + k - 1 )/k + ( (n*8) + k - 1 ) / k;
	
	cout << r << endl;

	return 0;
}
