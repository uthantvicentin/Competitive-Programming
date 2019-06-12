#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	cin >> str;
	int conta = 0;
	for(int i = 0 ; i < str.length(); ++i)
		if(str[i] == 'a')
			conta++;
	
	int a = str.length() - conta;
	if(conta > a)
		cout << str.length() << endl;
	else{
		int aux = str.length();
		while(a >= conta){
				aux--;
				a = aux - conta; 
		}
		cout << aux << endl;
	}

	return 0;
}
