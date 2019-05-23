#include <bits/stdc++.h>

using namespace std;

int main(){
  // ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string diamante;
  int countaberto,countfechado;
  int resul,n;
  cin >> n;
  scanf("\n");
  while(n--){
    getline(cin,diamante);
    countaberto = 0;
    countfechado = 0;
    resul = 0;
    for(int i = 0 ; i < diamante.size() ; i++){
      if(diamante[i] == '<')
        countaberto++;
      else if(diamante[i] == '>' && countaberto > 0){
        countaberto--;
        resul++;
      }
    }
      cout << resul << '\n';

  }


}
