#include <bits/stdc++.h>

using namespace std;

int main(){
	double n,m,aux;
	cin >> n >> m;
	n = abs(n-m);
	cout << ceil(m/n) << endl;

	return 0;
}
