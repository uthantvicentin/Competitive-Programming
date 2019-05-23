#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k,o,vet[51],j,cont,aux,x;
  cin >> n;
  while(n--){
    cin >> o;
    for(int i = 0 ; i < o ; i++)
      cin >> vet[i];
    cont = 0;
    for(j = 0; j < o; j++){
      for(k = j+1; k < o; k++){
        if(vet[j] > vet[k]){
          aux = vet[j];
          vet[j] = vet[k];
          vet[k] = aux;
          cont++;
        }
      }
    }
    printf("Optimal train swapping takes %d swaps.\n", cont);
  }

  return 0;
}
