#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string letra;
  int count;
  while (cin >> letra){
    count = 0;
    for(int i = 0 ; i < letra.size();i++){
      if(letra[i] == '(')
        count++;
      else if (letra[i] == ')'){
        count--;
        if(count < 0)
          break;
      }
     }
    if(count < 0){
      cout << "incorrect" << '\n';
      continue;
    }
    if(count%2 == 0)
      cout << "correct" << '\n';
    else
      cout << "incorrect" << '\n';
  }

  return 0;
}
