#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int k;
		cin >> k;
		string str;
		int ans = 0;
		int vet[k];
		cin.ignore();
		for(int i = 1 ; i <= k ; ++i){
			getline(cin,str);
			if(str[0] == 'L'){
				vet[i] = -1;
				ans -= 1;
			}
			else if(str[0] == 'R'){
				vet[i] = 1;
				ans += 1;	
			}
			else{
				string kk;
				if(isdigit(str[str.length()-3]))
					kk = str.substr(str.length()-3,3);
				else if(isdigit(str[str.length()-2]))
					kk = str.substr(str.length()-2,2);
				else
					kk = str[str.length()-1];
				int aux = stoi(kk); 
				vet[i] = vet[aux];
				ans += vet[aux];
			}
		}
		cout << ans << '\n';	
	}	

	return 0;
}
