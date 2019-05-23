#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	int n,v[105],soma = 0;
	bool flag = false;
	int cont = 0;
	memset(v,0,sizeof(v));
	cin >> n;
	for(int i = 0 ; i < n ; ++i)
		cin >> v[i];

	for(int i = 0 ; i < n-1 ; ++i){
		if(v[i] == 3 and v[i+1] == 2){
			flag = true;
			break;
		}
		else if(v[i] == 2 and v[i+1] == 3){
			flag = true;
			break;
		}
		else{
			if(v[i] == 3 and v[i+1] == 1 and v[i+2] == 2)
				cont++;
			if(v[i] == 1 and v[i+1] == 2)
				soma+= 3;
			else if(v[i] == 1 and v[i+1] == 3)
				soma+= 4;
			else if(v[i] == 2)
				soma+= 3;
			else if(v[i] == 3)
				soma += 4; 
		}
	}
	
	soma-=cont;

	if(flag)
		cout << "Infinite\n";
	else
		cout << "Finite\n" << soma << endl;

		return 0;
}

/*
	 1 é circulo
	 2 triangulo isoceles 
	 3 quadrado
 */
