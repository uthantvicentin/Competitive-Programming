#include <bits/stdc++.h>

using namespace std;

typedef struct x{
	int id;
	int cont;
}ASCII;

bool compare(ASCII a, ASCII b){
	if(b.cont == a.cont)
		return a.id > b.id;
	else
		return a.cont < b.cont;
}


int main(){
	string v,c;
	bool flag = false;
	while(getline(cin,v)){

		if(flag)
			cout << '\n';

		int aux = v.length();
		int contador = 0,conta = 1;
		ASCII t[aux];
		memset(t,0,sizeof(t));
		stable_sort(v.begin(),v.end());	
		int x = v[0];	
		for(int i = 1 ; i < aux ; i++){
			int 	y = v[i];
			if(x == y)
				conta++;
			else{
				t[contador].id = x;
				t[contador].cont = conta;
				x = y;
				conta = 1;
				contador++;
			}
		}
		t[contador].id = x;
		t[contador++].cont = conta;
		stable_sort(t,t+contador,compare);

		for(int i = 0 ; i < contador; i++)
			cout << t[i].id << ' ' << t[i].cont << '\n';

		flag = true;

	}

	return 0;
}

