#include <bits/stdc++.h>

using namespace std;

int main(){
	string str[3] = {"one","two","three"};
	string ans;
	int n;
	bool flag;
	cin >> n;
	int i;
	while(n--){
		cin >> ans;
		for(i = 0 ; i < 3 ; ++i){
			flag = false;
			int cont = 0;
			for(int j = 0 ; j < str[i].length() ; ++j){
				if(str[i][j] != ans[j])
					cont++;
				if(cont > 1){
					flag = true;
					break;
				}
			}
			if(!flag)
				break;
		}

		switch(i){
			case 0: cout << "1\n";
							break;
			case 1: cout << "2\n";
							break;
			case 2: cout << "3\n";
							break;

		}

	}

	return 0;
}
