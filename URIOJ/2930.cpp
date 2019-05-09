#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	int N,M;
	scanf("%d %d",&N,&M);

	if(M-3 >= N)
		printf("Muito bem! Apresenta antes do Natal!\n");
	else if(N+1 == M){
		printf("Parece o trabalho do meu filho!\n");
		if(N+2 < 24)
			printf("TCC Apresentado!\n");
		else
			printf("Fail! Entao eh nataaaaal!\n");
	}
	else
		printf("Eu odeio a professora!\n");
	return 0;
}

