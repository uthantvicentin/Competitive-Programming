#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	int parbau = 0, imparbau = 0, parchave = 0, imparchave = 0;
	cin >> n >> m;	
	int a[n], b[m];
	
	for(int i = 0 ; i < n ; ++i){
		cin >> a[i];
		a[i] % 2 == 0 ? parbau++ : imparbau++;
	}

	for(int i = 0 ; i < m ; ++i){
		cin >> b[i];
		b[i] % 2 == 0 ? parchave++ : imparchave++;
	}

 	int answer = 0;
	if(imparchave > 0 && parbau > 0)
		answer = min(imparchave,parbau);
	if(parchave > 0 && imparbau > 0)
		answer+= min(parchave,imparbau);

	cout << answer << '\n';

	return 0;
}

