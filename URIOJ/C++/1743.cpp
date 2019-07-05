#include <bits/stdc++.h>

using namespace std;

int main(){
	int va[6];
	int vb[6];
	for(int i = 0 ; i < 5 ; ++i)
		cin >> va[i];
	for(int i = 0 ; i < 5 ; ++i)
		cin >> vb[i];
	bool flag = false;
	for(int i = 0 ; i < 5 ; ++i)
		if((vb[i] + va[i]) != 1){
			flag = true;
			break;
		}
	if(!flag)
		cout << "Y\n";
	else
		cout << "N\n";
	return 0;
}
