#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a,b,c,d;
		string aux;
		cin >> a >> aux >> b;
		cin >> c >> aux >> d;
		if((a+d) > (b+c))
			printf("Time 1\n");
		else if((b+c) > (a+d))
			printf("Time 2\n");
		else if(d > b)
			printf("Time 1\n");
		else if(b > d )
			printf("Time 2\n");
		else
			printf("Penaltis\n");	
	}
	return 0;
}
