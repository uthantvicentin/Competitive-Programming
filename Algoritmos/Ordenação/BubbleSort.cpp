#include <bits/stdc++.h>

using namespace std;

void BubbleSort(int *A, int N);

int main(){
  int A[] = {10,3,5,7,11,23,7,2,9,1};
  int N = (int)(sizeof(A)/sizeof(A[0]));

  // Antes da ordenação
  for(int i = 0 ; i < N ; i++)
    cout << A[i] << ' ';
  cout << '\n';

  BubbleSort(A,N);

  // Após ordenação
  for(int i = 0 ; i < N ; i++)
    cout << A[i] << ' ';
  cout << '\n';

  return 0;
}


void BubbleSort(int *A, int N){
  for(int i = 0 ; i < N ; i++)
    for(int j = i+1 ; j < N ; j++)
      if(A[i] > A[j])
        swap(A[i],A[j]);
}
