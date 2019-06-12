#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,x,soma = 0;
	scanf("%d",&n);
	for(int i = 0 ; i < n ; ++i){
		scanf("%d",&x);
		soma += x;
	}
	
	printf("%.12lf\n",(double)soma/n);
	return 0;
}
