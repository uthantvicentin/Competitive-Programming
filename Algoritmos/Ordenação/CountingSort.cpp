#include <bits/stdc++.h>

using namespace std;

void CountingSort(int *A,int *B,int N){
	int C[N];
	memset(C,0,sizeof(C));
	for(int i = 0 ; i <= N ; i++)

}

int main(){

	int A[] = {2,5,3,0,2,3,0,3};
	int N = sizeof(A)/sizeof(A[0]);
	int B[N];

	for(int i = 0 ; i < N ; i++)
		printf("%d ",A[i]);
	printf("\n");

	CountingSort(A,B,N);

	for(int i = 0 ; i < N ; i++)
		printf("%d ",A[i]);
	printf("\n");

	return 0;
}
