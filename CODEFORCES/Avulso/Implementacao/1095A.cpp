#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string str;
	cin >> n;
	cin >> str;
	int cont = 1,k = 1;
	cout << str[0];
	for(int i = 1 ; i < str.length() ; i = i + k){
			cout << str[i];
			k++;
	}
	cout << endl;
	

	return 0;
}
