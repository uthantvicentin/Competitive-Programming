#include <bits/stdc++.h>

using namespace std;

int main() {
   int a, b;
   while(cin >> a >> b && a && b) {
      if(a > b)
         swap(a,b);
      
      cout << a - (b - a) << '\n';
   }
}
