#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int k;
		cin >> k;
		string str;
		cin >> str;
		int pos = k;
		for(int i = 0 ; i < k ; ++i){
			if(str[i] == '8'){
				pos = i;
				break;
			}
		}
			if(k-pos > 10)
				cout << "YES\n";
			else
				cout << "NO\n";
	}
	return 0;
}
