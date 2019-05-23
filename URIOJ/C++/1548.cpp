#include <bits/stdc++.h>
using namespace std;

int conta;

int main(){
  vector <int> aluno,aux;
  int n,k,x;
  cin >> n;
  for(int i = 0 ; i < n ; i++){
    cin >> k;
    for(int y = 0 ; y < k ; y++){
      cin >> x;
      aluno.push_back(x);
    }
    conta = 0;
    aux = aluno;
    sort(aluno.begin(),aluno.end(),greater<>());
    for(int y = 0 ; y < k ; y++)
      if(aluno[y] != aux[y])
        conta++;
    cout << k - conta << '\n';
    aluno.clear();
    aux.clear();

  }
  return 0;
}
