#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector <int> par,impar;
  int num,n;
  cin >> n;
  while(n--){
    cin >> num;
    if(num % 2 == 0)
      par.push_back(num);
    else
      impar.push_back(num);
  }
  sort(par.begin(),par.end());
  sort(impar.begin(),impar.end(),greater<int>());
  for(int i =  0 ; i < par.size();i++)
    cout << par[i] << '\n';
  for(int i =  0 ; i < impar.size();i++)
    cout << impar[i] << '\n';
  return 0;
}
