/*
ID: uthantv1
PROG: beads
LANG: C++
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	ifstream fin("beads.in");
	ofstream fout("beads.out");
	int n;	
	string beads;
	fin >> n;
	fin >> beads;
	
	int cont = 0;
	for(int i = 0 ; i < beads.length();i++)
		if(beads[i] == 'w') cont++;

	fout << beads << '\n';
	fout << cont << '\n';	

	return 0;
}

