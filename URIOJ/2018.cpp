#include <bits/stdc++.h>

using namespace std;

struct record{
	string pais;
	int ouro,prata,bronze;
}c[1005];


bool comp(const record &a, const record &b){
	if(a.ouro !=  b.ouro) return a.ouro > b.ouro;
	if(a.prata != b.prata)	return a.prata > b.prata;
	if(a.bronze != b.bronze) return a.bronze > b.bronze;
	return a.pais < b.pais;
}


int main(){
	map <string,int>o,p,b;
	string tipo,s1;
	while(getline(cin,tipo)){
		for(int i = 1 ; i <= 3 ; ++i){
			getline(cin,s1);
			o[s1];
			p[s1];
			b[s1];
			if(i == 1) o[s1]++;
			else if(i == 2) p[s1]++;
			else b[s1]++;
		}
	}
	int x = 0;
	auto it = o.begin();
	auto itp = p.begin();
	auto itb = b.begin();
	for( ; it != o.end() ; ++it,++x,++itp,++itb){
		c[x].pais = it->first;
		c[x].ouro = it->second;
		c[x].prata = itp->second;
		c[x].bronze = itb->second;
	}

	stable_sort(c,c+x,comp);
	cout << "Quadro de Medalhas\n";
	for(int i = 0 ; i < x  ; ++i)
		cout << c[i].pais <<' '<< c[i].ouro << ' ' << c[i].prata << ' '<< c[i].bronze <<'\n';

	return 0;
}

