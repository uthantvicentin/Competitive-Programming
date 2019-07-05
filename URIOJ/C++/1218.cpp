#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int i = 1;
	int o = 1;	
	while(cin >> n){
		if(o > 1)
			printf("\n");
		int vm = 0,vf = 0;
		char c;
		string str,d,l;
		cin.ignore();
		getline(cin,str);
		for(int j = 0 ; j < str.length() ; ++j){
			c = str[j];
			if(isdigit(c))
				d += c;
			if(isalpha(c)){
				int aux = stoi(d);
				if(aux == n){
					if(c == 'M')
						vm++;
					else
						vf++;
				}
				d.clear();
			}
		}
		printf("Caso %d:\nPares Iguais: %d\nF: %d\nM: %d\n",i++,vm+vf,vf,vm);
		o++;
	}


	return 0;
}
