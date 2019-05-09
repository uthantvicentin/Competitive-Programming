#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	map <int, bool> fx;
	int n;
	int cont = 0;
	scanf("%d",&n);
	while(1){

		fx[n] = true;
		cont++;
		n++;

		while(n % 10 == 0 and n > 0)
			n /= 10;

		if(fx[n]) break;
	}


	printf("%d\n",cont);
	return 0;
}
