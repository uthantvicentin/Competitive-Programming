#include <bits/stdc++.h>

using namespace std;

int main(){
  int i,n,vet[1010];
  while(cin >> n and n){
    while(cin >> vet[0] and vet[0]){
      for(int i = 1 ; i < n ;i++)
         cin >> vet[i];

      stack <int> pilha;
      int k = 0;
      for(int i = 1 ; i <= n ;i++){
        pilha.push(i);

        while(pilha.size() > 0 && vet[k] == pilha.top()){
          k++;
          pilha.pop();
        }
      }
      cout << ((pilha.size() == 0) ? "Yes" : "No") << '\n';
    }
    cout << '\n';
  }
  return 0;
}
