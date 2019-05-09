#include <bits/stdc++.h>
using namespace std;


int binarySearch2(vector <string> arr, string x,int n) {
        int l = 0;
        int r = n - 1;
        while (l <= r){
            int m = l + (r - l) / 2;

        int res;
        if (x == (arr[m]))
            res = 0;

            // Check if x is present at mid
            if (res == 0)
                return m;

            // If x greater, ignore left half
            if (x > (arr[m]))
                l = m + 1;

            // If x is smaller, ignore right half
            else
                r = m - 1;
        }

        return -1;
}

int main(){

  ios::sync_with_stdio(false);
  cout.precision(2);
  cout.setf(ios::fixed);
  vector <pair<string,float>>vet;
  vector<string> auxiliar;
  int n,k,quantidade;
  string palavra;
  float preco;
  cin >> n;
  while(n--){
    cin >> k;
    while(k--){
      cin >> palavra >> preco;
      vet.push_back(make_pair(palavra,preco));
      auxiliar.push_back(palavra);
    }
    cin >> k;
    sort(vet.begin(),vet.end());
    sort(auxiliar.begin(),auxiliar.end());
    preco = 0.0;
    while(k--){
      cin >> palavra >> quantidade;
      int high = auxiliar.size();
      int posicao = binarySearch2(auxiliar,palavra,high);
      if(posicao != -1)
        preco += (vet[posicao].second * quantidade);
    }
    cout << "R$ " << preco << '\n';
    vet.clear();
    auxiliar.clear();

  }

  return 0;
}


#include <stdio.h>
#include <string.h>

struct fruta{
    char nome[100];
    float valor;
};

// int main(){
//     int n, i, j, qtd, m, o, p;
//     char f[100];
//     float total;
//
//     scanf("%d",&n);
//     for(i = 0; i < n; i++){
//         total = 0.0;
//         scanf("%d",&m);
//         struct fruta array[m];
//         for(j = 0; j < m; j++){
//             scanf("%s %f",&array[j].nome,&array[j].valor);
//         }
//         scanf("%d",&o);
//         for(j = 0; j < o; j++){
//             scanf("%s %d",&f,&qtd);
//             for(p = 0; p < m; p++){
//                 if(!strcmp(array[p].nome,f)){
//                 total += qtd*array[p].valor;
//                 break;
//                 }
//             }
//         }
//         printf("R$ %.2f\n",total);
//     }
//     return 0;
// }
