#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	char x[2];
	string s;
	cin >> s;
	int q;
	int v[10] = {0,0,0,0,0,0,0,0,0,0};
	for(int i = 0 ; i < s.length() ; ++i){
		x[0] = s[i];
		q = stoi(x);
		v[q]++;	
	}
	for(int i = 0 ; i < 10 ; ++i)
		cout << i << ' ' << v[i] << endl; 


	return 0;
}

