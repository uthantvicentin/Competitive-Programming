#include <bits/stdc++.h>

using namespace std;

int main(){
	string str,aux;
	cin >> str >> aux;
	int k = aux.length()-1;	
	bool flag = true;
	for(int i = 0 ; i < str.length() ;++i)
		if(aux[k--] != str[i]){
			cout << "NO" << endl;
			flag = !flag;
			break;
		}
	if(flag)
		cout << "YES" << endl;

	return 0;
}
