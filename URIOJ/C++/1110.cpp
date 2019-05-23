#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  deque <int> fila;
  int num,aux;
  while(1){
    cin >> num;
    if(num == 0)
      break;
    for(int i = 1 ; i <= num ;i++)
      fila.push_back(i);

    cout << "Discarded cards: ";
    while(fila.size() > 1){
      if(fila.size() != 2)
        cout << fila.front() << ", ";
      else
        cout << fila.front() << '\n';
      fila.pop_front();
      fila.push_back(fila.front());
      fila.pop_front();
    }
      cout <<"Remaining card: "<<fila.front() << '\n';
  }
  return 0;

}
