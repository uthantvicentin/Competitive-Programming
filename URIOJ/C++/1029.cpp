#include <bits/stdc++.h>

using namespace std;
int cont;

int fib(int n){
	cont++;
	if(n == 0 || n == 1) return n;
	return fib(n-1) + fib(n-2);
}

int main(){
	int num,x;
	scanf("%d",&num);
	for(int i = 0 ; i < num ; ++i){
		scanf("%d",&x);
		cont = 0;
		printf("fib(%d) = %d calls = %d\n",x,cont-1,fib(x));
	}

	return 0;
}

