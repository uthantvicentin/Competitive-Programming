#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int soma = 0;
	while(n--){
		string a,str;
		int b;
		cin >> str;
		if(str.compare("donate")==0){
			cin >> b;
			soma+=b;
		}
		else
			cout << soma << endl;
	}

	return 0;
}
