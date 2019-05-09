#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main(){
	IOS;
	string n,ok = "AEIOUY";
	cin >> n;
	bool flag = true, flag2 = true;
	int cont = 0;
	for(int i = 0 ; i < ok.size() ;++i)
		if(ok[i] == n[2]){
			cont++;
			break;
		}

	if(cont > 0)
		flag = false;
	int num[7];
	strin	aux;

	aux = n[0];
	num[0] = stoi(aux);
	aux = n[1];
	num[1] = stoi(aux);
	aux = n[3];
	num[2] = stoi(aux);
	aux = n[4];
	num[3] = stoi(aux);
	aux = n[5];	
	num[4] = stoi(aux);
	aux = n[7];
	num[5] = stoi(aux);
	aux = n[8];
	num[6] = stoi(aux);


	int a;

	a = num[0] + num[1];
	if(a%2 == 0)
		flag2 = true;
	else
		flag2 = false;

	if(flag2){
		a = num[2] + num[3];
		if(a%2 == 0) 
			flag2 = true;
		else 
			flag2 = false;
	}

	if(flag2){
		a = num[3] + num[4];
		if(a%2 == 0)
			flag2 = true;
		else
			flag2 = false;
	}

	if(flag2){
		a = num[5] + num[6];
		if(a%2  == 0)
			flag2 = true;
		else
			flag2 = false;
	}


	if(!flag and !flag2)
		cout << "invalid\n";
	else if(flag and !flag2)
		cout << "invalid\n";
	else if(!flag and flag2)
		cout << "invalid\n";
	else
		cout << "valid\n";
	return 0;
}

