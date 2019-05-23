#include <bits/stdc++.h>

using namespace std;
int cont;

void posicao(int i, int n){
	if(i == 1 && cont)
		return;
	cont++;	
	return i <= n/2? posicao(2*i,n) : posicao(i-(n-i+1),n);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cont = 0;
	int n;
	scanf("%d",&n);
	posicao(1,n);
	printf("%d\n",cont);
	
	return 0;
}
