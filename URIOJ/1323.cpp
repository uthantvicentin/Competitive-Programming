#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  // cin.tie(NULL);
  int num;
  while(1){
    cin >> num;
    if(!num)
      break;
    cout << (num*(num+1)*((2*num)+1))/6 << '\n';
  }

  return 0;
}
