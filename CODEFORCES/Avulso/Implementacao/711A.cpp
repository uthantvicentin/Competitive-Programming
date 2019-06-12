#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string str[n];
	bool flag = false;
	for(int i = 0 ; i < n ; ++i)
		cin >> str[i];

	for(int i = 0 ; i < n ; ++i){
		if(str[i][0] == 'O' and str[i][1] == 'O'){
			str[i][0] = '+';
			str[i][1] = '+';
			flag = !flag;
			break;
		}
		else if(str[i][3] == 'O' and str[i][4] == 'O'){
			str[i][3] = '+';
			str[i][4] = '+';
			flag = !flag;
			break;
		}
	}

	if(flag){
		cout << "YES\n";
		for(int i = 0 ; i < n ; ++i)
			cout << str[i] << endl;
	}
	
	else
		cout << "NO\n";


	return 0;
}
