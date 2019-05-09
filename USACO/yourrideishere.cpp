/*
ID: uthantv1
LANG: C++
TASK: ride
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	ofstream fout ("ride.out");
  ifstream fin ("ride.in");


	string palavra1,palavra2;
	int soma1 = 1, soma2 = 1;
	fin >> palavra1 >> palavra2;
	int n;
	for(int i = 0 ; i < palavra1.length() ; i++){
		n = palavra1[i] - 64;

		soma1 *= n;
	}

	for(int i = 0 ; i < palavra2.length() ; i++){
		n = palavra2[i] - 64;
		soma2 *= n;
		}
	if((soma1%47) == (soma2%47)) fout << "GO\n";
	else fout << "STAY\n";



	return 0;
}
