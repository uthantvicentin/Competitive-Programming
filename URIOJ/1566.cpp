#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector <int> vet;
  int n,o,x;
  cin >> n;
  while(n--){
    cin >> o;
    while(o--){
      cin >> x;
      vet.push_back(x);
    }
    sort(vet.begin(),vet.end());
    for(int i = 0 ; i < vet.size();i++){
      cout << vet[i];
      if(i < vet.size()-1)
        cout << ' ';
      else
        cout << '\n';
    }
    vet.clear();
  }

  return 0;
}
