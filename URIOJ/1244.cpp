#include <bits/stdc++.h>

using namespace std;

bool compare(string a, string b){
  return (a.length() <= b.length());
}

int main(){

  string auxiliar,s;
  vector <string> palavra;
  int n;
  cin >> n;
  cin.ignore();
  while(n--){
    getline(cin,auxiliar);

    int j = 0,i = 0;
    while(i <= auxiliar.length()){
      if(auxiliar[i] == ' ' || auxiliar[i] == '\0'){
         s = auxiliar.substr(j, i - j);
         palavra.push_back(s);
         j = i + 1;
       }
       i++;
    }
    stable_sort(palavra.begin(),palavra.end(),compare);
    reverse(palavra.begin(), palavra.end());
    for(int i = 0 ; i < palavra.size() ; i++){
      cout << palavra[i];
      if(i!= palavra.size()-1)
        cout << ' ';
    }

    cout << '\n';

    palavra.clear();
  }
  return 0;
}







// #include <iostream>
// #include <cstring>
// #include <algorithm>
//
// using namespace std;
//
// string arr[51];
// int x;
//
// bool compare(string a, string b){
//   return (a.length() <= b.length());
// }
//
// void split(string word){
//  int size = word.length();
//  int i = 0, x = 0, j = 0;
//  string s;
//
//  while(i <= size){
//   if(word[i] == ' ' || word[i] == '\0'){
//    s = word.substr(j, i - j);
//    arr[x] = s;
//    j = i + 1;
//    x++;
//   }
//   i++;
//  }
//
//  stable_sort(arr, arr + x, compare);
//  reverse(arr, arr + x);
//
//  for (i = 0; i < x; ++i){
//   cout << arr[i];
//   if(i != (x - 1))
//    cout << " ";
//  }
//
//  cout << '\n';
// }
//
// int main(int argc, char const *argv[])
// {
//  int n, i;
//  string word;
//
//  cin >> n; cin.ignore();
//
//  while(n--)
//  {
//   getline(cin, word);
//   split(word);
//  }
//
//  return 0;
// }
