#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  double soma;
  vector <int> numeros;
  int aux,k;
  cin >> n;
  while(n--){
    cin >> k;
    soma = 0;
    for(int i = 0 ; i < k ; i++){
        cin >> aux;
        numeros.push_back(aux);
        soma += aux;
    }
    soma /= k;
    int count = 0;
    for(int i = 0 ; i < numeros.size() ; i++){
      if(numeros[i] > soma)
        count++;
    }
      printf("%.3lf%%\n",(double)count/k*100);
      numeros.clear();
    }

  return 0;
}
