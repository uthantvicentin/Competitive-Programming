#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	int n,m;
	cin >> n >> m;
	int x = n-m;
	int max = n * 0.5;
	
	if(x == n)
		cout << "1\n";
	else if(x > max)
		cout << (n % x) << endl;
	else if(x <= max)
		cout << x << endl;

	return 0;
}




