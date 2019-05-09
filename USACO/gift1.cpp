/*
ID: uthantv1
LANG: C++
TASK: gift1
 */

#include <bits/stdc++.h>

using namespace std;



typedef struct a{
	string nome;
	int dinheiro;		
}NP;


int posicao(NP *a, string auxiliar, int n){
	int i;
	for(i = 0 ; i < n ; i++)
		if(a[i].nome == auxiliar)
			break;
	return i;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ofstream fout("gift1.out");
	ifstream fin("gift1.in");
	int n,quantodoa,paraquantos;
	NP amigos[11];
	fin >> n;
	string auxiliar;
	memset(&amigos,0,sizeof amigos);

	for(int i = 0 ; i < n ; i++){ 
		fin >> auxiliar;
		amigos[i].nome = auxiliar;
	}
	while(fin >> auxiliar){
		fin >> quantodoa;
		fin >> paraquantos;
		if(paraquantos != 0){
		
		int qt = quantodoa/paraquantos;
		int j = posicao(amigos,auxiliar,n);
	
		amigos[j].dinheiro -= (qt * paraquantos);

		for(int i = 0 ; i < paraquantos ; i++){
			fin >> auxiliar;
			int w = posicao(amigos,auxiliar,n);	
			amigos[w].dinheiro += qt;
		}
		}

	}	



		for(int i = 0 ; i < n ; i++) fout << amigos[i].nome << ' ' << amigos[i].dinheiro << '\n';





	return 0;
}
