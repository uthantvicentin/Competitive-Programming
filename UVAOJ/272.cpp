#include <bits/stdc++.h>

using namespace std;

int main(){
  string c;
  bool flag = true;
  while(getline(cin,c)){
    for(int i = 0 ; i < c.size() ; i++){
      if(c[i] == '"'){
        if(flag)
          cout << "``";
        else
          cout << "''";
        flag = !flag;
      }
      else
        cout << c[i];

    }
    cout << '\n';
  }


  return 0;
}
