#include <bits/stdc++.h>

using namespace std;

void HeapSort(int *A,int N);
void MaxHeapify(int *A, int N, int i);

int main(){
	int A[] = {10,3,5,7,11,23,7,2,9,1};
	int N = sizeof(A)/sizeof(A[0]);

	// Antes da ordenação
	for(int i = 0 ; i < N ; i++)
		cout << A[i] << ' ';
	cout << '\n';

	HeapSort(A,N);

	// Após ordenação
	for(int i = 0 ; i < N ; i++)
		cout << A[i] << ' ';
	cout << '\n';

	return 0;
}

void HeapSort(int *A, int N){

	for(int i = N/2 -1 ; i >= 0 ; i--)
		MaxHeapify(A,N,i);

	for(int i = N-1 ; i >= 0 ; i--){
		swap(A[0],A[i]);
		MaxHeapify(A,i,0);
	}

}

void MaxHeapify(int *A,int N, int i){

	int L = 2*i;
	int R = 2*i+1;
	int maior = i;

	if(L < N && A[L] > A[i])
		maior = L;
	if(R < N && A[R] > A[maior])
		maior = R;
	if(maior != i){
		swap(A[i],A[maior]);
		MaxHeapify(A,N,maior);
	}
}
