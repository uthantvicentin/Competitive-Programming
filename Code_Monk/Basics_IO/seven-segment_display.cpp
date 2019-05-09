#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;


int solve(int n){
	if(n == 0)
		return 1;
	if(n % 2 == 0){
		cout << '1';
		return solve(n-2);
	}
	else{
		cout << '7';	
		return solve(n-3);	
	}
	return 1;
}


int matchsticks(string x){
	int cont;
	int a = stoi(x);
	switch(a){
		case 0: cont = 6;
						break;
		case 1: cont = 2;
						break;
		case 2: cont = 5;
						break;
		case 3: cont = 5;
						break;
		case 4: cont = 4;
						break;
		case 5: cont = 5;
						break;
		case 6: cont = 6;
						break;
		case 7: cont = 3;
						break;
		case 8: cont = 7;
						break;
		case 9: cont = 6;
						break;
	}
	return cont;	
}

int main(){
	IOS;
	int n; cin >> n;
	string a,b;
	int soma,x;
	while(n--){
		soma = 0;
		cin >> a;
		for(int i = 0 ; i < a.length() ; ++i){ 
			string x;
			x = a[i];
			soma += matchsticks(x);
		}
		solve(soma);
		cout << endl;
	}		

	return 0;
}


