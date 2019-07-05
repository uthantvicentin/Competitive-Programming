#include <bits/stdc++.h>

using namespace std;

int main(){
	int vetd[65];
	int vete[65];
	int a;
	string b;
	int n;
	while(cin >> n){
		memset(vetd,0,sizeof(vetd));
		memset(vete,0,sizeof(vete));
		int soma = 0;
		for(int i = 0 ; i < n ; ++i){
			cin >> a >> b;
			if(b[0] == 'D')
				vetd[a]++;
			else
				vete[a]++;
		}
		for(int i = 30 ; i < 61 ; ++i){
			if(vetd[i] > 0 and vete[i] > 0)
				soma += min(vetd[i],vete[i]);
		}

		cout << soma << "\n";
	}
	return 0;
}
