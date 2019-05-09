#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	string n;
	cin >> n;
	int soma = 0;
	for(int i = 0 ; i < n.length() ; ++i) soma +=n[i]-96;
	cout << soma << endl;


	return 0;
}

