#include <bits/stdc++.h>

using namespace std;

int Partition(int *A, int P, int R){
	int x = A[R];
	int i = P-1;
	for(int j = P ; j <= R-1 ; j++){
		if(A[j] <= x){
			i++;
			swap(A[i],A[j]);		
		}
	}
	swap(A[i+1],A[R]);
	return (i+1);

}

void QuickSort(int *A,int P, int R){

	if(P < R){
		int Q = Partition(A,P,R);
		QuickSort(A,P,Q-1);
		QuickSort(A,Q+1,R);
	}
}


int main(){
	ios_base::sync_with_stdio(false);
	int A[] = {2,8,7,1,3,5,6,4};
	int N = sizeof(A)/sizeof(A[0]);
	for(int i = 0 ; i < N ; i++)
		printf("%d ",A[i]);
	printf("\n");	

	QuickSort(A,0,N-1);

	for(int i = 0 ; i < N ; i++)
		printf("%d ",A[i]);
	printf("\n");

	return 0;
}
