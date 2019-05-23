#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,m,c,aux,pos;
  int mat[105][206];
  vector <int> vet;
  cin >> n;
  while(n--){
    memset(mat,0,sizeof(mat));
    cin >> m;
    cin >> c;
    for(int i = 0 ; i < c ; i++){
      cin >> aux;
      vet.push_back(aux);
    }
    // sort(vet.begin(),vet.end());

    for(int i = 0 ; i < c ; i++){
      aux = vet[i] % m;
      ++mat[aux][0];
      pos = mat[aux][0] ;
      mat[aux][pos]=vet[i];
    }

    for(int i = 0 ; i < m ; i++){
      cout << i << " -> ";
      if(mat[i][0] > 0)
      for(int j = 1 ; j <= mat[i][0] ; j++){
        cout << mat[i][j];
        if(j != mat[i][0])
          cout << " -> ";
        else
            cout << " -> \\";
      }
      else
          cout << "\\";
        cout << '\n';
    }


    if(n >= 1)
      cout << '\n';

    vet.clear();
  }

  return 0;
}
