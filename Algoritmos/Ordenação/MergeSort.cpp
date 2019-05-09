#include <bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std;

int MergeSort(int *A,int p, int r);
void Merge(int *A, int p, int q, int r);

int main(){

	int A[] = {3,5,2,1,4,6};
  int p = 0 , r = (int)(sizeof(A)/sizeof(A[0]));

  for(int i = 0 ; i < r ; i++)
    cout << A[i] << ' ';
  cout << '\n';

  MergeSort(A,p,r);

  for(int i = 0 ; i < r ; i++)
    cout << A[i] << ' ';
  cout << '\n';

  return 0;
}

int MergeSort(int *A, int p, int r){
  if(p < r){
    int q = (p+r)/2;
    MergeSort(A,p,q);
    MergeSort(A,q+1,r);
    Merge(A,p,q,r);
  }
	return 0;
}

void Merge(int *A, int p, int q, int r){

  int n1 = q-p+1, n2 = r-q;

  int L[n1+1], R[n2+1];

  for(int i = 1 ; i <= n1 ; i++)
    L[i] = A[p+i-1];

  for(int i = 1 ; i <= n2 ; i++)
    R[i] = A[q+i];


  L[n1+1] = abs(INF);
  R[n2+1] = abs(INF);

  int i = 1 , j = 1;

  for(int k = p ; k <= r ; k++)
    if(L[i] <= R[j])
      A[k] = L[i++];
      else
        A[k] = R[j++];

}
