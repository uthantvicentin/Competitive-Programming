#include <bits/stdc++.h>

using namespace std;

typedef struct x{
	int id;
	int nota;	
}n;



bool cmp(const n a, const n b){
	if(a.nota == b.nota)
		return a.id < b.id;
	return a.nota > b.nota;	
}

int main(){
	n rank[1005];
	int s;

	cin >> s;
	int n1,n2,n3,n4;

	for(int i = 0 ; i < s ;++i){
		cin >> n1 >> n2 >> n3 >> n4;
		rank[i].id = i+1;
		rank[i].nota = n1+n2+n3+n4;	
	}
	
	sort(rank,rank+s,cmp);


	for(int i = 0 ; i < s ; ++i)
		if(rank[i].id == 1){
			cout << ++i << endl;
			break;
		}

	return 0;
}
