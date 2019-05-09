#include <bits/stdc++.h>

using namespace std;


typedef struct tipo {
	string nome,tamanho,cor;

}t;


t tipo[61];

bool compare(t a, t b){

	if(a.cor == b.cor){

		if(a.tamanho == b.tamanho) return a.nome < b.nome;

		else return a.tamanho > b.tamanho;

	}else
		return a.cor < b.cor;

}
int main(){
	int N;
	ios_base::sync_with_stdio(false);
	bool flag = false;
	while(1){
		cin >> N;
		if(N == 0)
			break;
		if(flag){
			cout << '\n';
			flag = !flag;
		}
		for(int i = 0 ; i < N ; i++){
			cin.ignore();
			getline(cin,tipo[i].nome);
			cin >> tipo[i].cor >> tipo[i].tamanho;
		}

		stable_sort(tipo,tipo+N,compare);
		for(int i = 0 ; i < N ; i++)
			cout << tipo[i].cor << ' ' <<tipo[i].tamanho << ' ' << tipo[i].nome << '\n';

		flag = !flag;
	}


	return 0;
}
