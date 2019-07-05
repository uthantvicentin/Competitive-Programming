#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	while(cin >> n >> m and n){
		int vet[n+5];
		for(int i = 1 ; i <= n ; ++i)
				cin >> vet[i];	

		while(m--){
			int a,b,c;
			cin >> a >> b >> c;
			vet[a] -= c;
			vet[b] += c;	
		}
		bool flag = false;
		for(int i = 1 ; i <= n ; ++i)
			if(vet[i] < 0){
				flag = true;
				break;
			}
		cout << (flag? "N\n":"S\n");
		
		
		
	}

	return 0;
}

