#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k,m,mm;
	int menor[5],maior[5];
	while(cin >> n){

		for(int x = 0 ; x < n ; ++x){
			memset(menor,0,sizeof(menor));
			memset(maior,0,sizeof(maior));
			m = 0, mm = 0;
			for(int i = 0 ; i < 5 ; ++i){
				cin >> k;
				if(k <= 127){
					menor[i]++;
					m++;
				}
				else{
					maior[i]++;
					mm++;
				}
			}
			if(m < mm and m == 1){
				for(int i = 0 ; i < 5 ; ++i)
					if(menor[i] == 1){
						switch(i){
							case 0:cout << "A\n";
										 break;
							case 1:cout << "B\n";
										 break;
							case 2:cout << "C\n";
										 break;
							case 3:cout << "D\n";
										 break;
							case 4:cout << "E\n";
										 break;	
						}
						break;
					}
			}
			else
				cout << "*\n";
		}
	}
	return 0;
}
