#include <bits/stdc++.h>

using namespace std;

void InsertionSort(int *A, int N);

int main(){
  int A[] = {2,3,5,2,4,6,7,9,0,1,-1};
  int N = (int)(sizeof(A)/sizeof(A[0]));

  // Antes da ordenação
  for(int i = 0 ; i < N ; i++)
    cout << A[i] << ' ';
  cout << '\n';

  InsertionSort(A,N);

  // Após ordenação
  for(int i = 0 ; i < N ; i++)
    cout << A[i] << ' ';
  cout << '\n';

  return 0;
}

void InsertionSort(int *A, int N){
  for(int j = 1 ; j < N ; j++){
    int aux = A[j];
    int i = j-1;
    while(i > -1 && A[i] > aux){
      A[i+1] = A[i];
      i--;
    }
    A[i+1] = aux;
  }
}
