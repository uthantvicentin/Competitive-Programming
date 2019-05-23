#include <bits/stdc++.h>

using namespace std;

struct record{
	string nome;
	int o,p,b;
}c[505];

bool comp(const record &a, const record &b){
	if(a.o != b.o)
		return a.o > b.o;
	if(a.p != b.p)
		return a.p > b.p;
	if(a.b != b.b)
		return a.b > b.b;
	return a.nome < b.nome;

}

int main(){
	int n;
	while(cin >> n){
		for(int i = 0 ; i < n ; ++i)
			cin >> c[i].nome >> c[i].o >> c[i].p >> c[i].b;
		stable_sort(c,c+n,comp);
		for(int i = 0 ; i < n ; ++i)
			cout << c[i].nome <<' ' << c[i].o <<' '<< c[i].p <<' '<< c[i].b << '\n';

	}
	return 0;
}

