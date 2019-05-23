/*
	 Primeiro devem ser ordenados na decrescente pelo seu peso. Se dois ou mais tiverem o mesmo peso
	 eles devem ser ordenados na crescente pela sua altura. Se continuarem com o mesmo peso ordena pelo nome;

 */

#include <bits/stdc++.h>

using namespace std;

typedef struct{
	string n;
	int w,a;
	double h;
}elf;

bool comp(elf a, elf b){
	if(a.w > b.w)
		return false;
	else
		if(a.w < b.w)
			return true;
	if(a.a > b.a)
		return true;
	else
		if(a.a < b.a)
			return false;
	if(a.h > b.h)
		return true;
	else
		if(a.h < b.h)
			return false;
		else{
			if(a.n > b.n)
				return true;
			else
				return false;

		}
}

int main(){
	int n,x,y;
	cin >> n;
	for(int cenario = 1 ; cenario <= n ; ++cenario){
		cin >> x >> y;
		elf elfo[x];
		for(int i = 0 ; i < x ; ++i) cin >> elfo[i].n >> elfo[i].w >> elfo[i].a >> elfo[i].h;

		stable_sort(elfo,elfo+x,comp);
		reverse(elfo,elfo+x);
		cout << "CENARIO {"<< cenario <<"}\n";

		for(int i = 0 ; i < y ; ++i) i < y-1 ? cout << i+1 << " - " << elfo[i].n << '\n' : cout << i+1 << " - " << elfo[i].n << '\n';
	}
	return 0;
}

