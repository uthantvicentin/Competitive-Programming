#include <bits/stdc++.h>

using namespace std;

int achou (vector <int> vet, int num){
  int posicao = -1;
  for(int i = 0 ; i < vet.size() ; i++)
    if(vet[i] == num){
      posicao = i;
      break;
    }
  return posicao;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,q,num,o = 1;
  vector <int> vet;

  while(1){
    cin >> n >> q;
    if((n == q) && (q == 0))
      break;
    while(n--){
      cin >> num;
      vet.push_back(num);
    }
    sort(vet.begin(),vet.end());
    cout << "CASE# "<< o++ <<":\n";

    for(int i = 1 ; i <= q ; i++ ){
      cin >> num;
      int posicao = achou(vet,num);
      if(posicao != -1){
        cout << num <<" found at " << ++posicao << '\n';
      }
      else
        cout << num<<" not found\n";
    }

   vet.clear();
  }

  return 0;
}
