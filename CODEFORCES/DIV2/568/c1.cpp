#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){
	ll n,m;
	cin >> n >> m;
	priority_queue <ll> fp,aux;
	ll vet[200005];
	for(ll i = 0 ; i < n ; ++i)
		cin >> vet[i];

	ll soma = 0;
	for(ll i = 0 ; i < n ; ++i){
		soma += vet[i];
		if(soma <= m){
			cout << 0 << ' ';
			fp.push(vet[i]);
		}
		else{
			ll aux = soma;
			ll cont = 0;
			while(aux > m){
				aux -= fp.top();
				fp.pop();
			}
			fp.push(vet[i]);
			fp.push(v[i]);
			cout << cont << ' ';
		}

	}


	return 0;
}
