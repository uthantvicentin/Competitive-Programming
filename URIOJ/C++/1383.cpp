#include <bits/stdc++.h>

using namespace std;

int main(){
	int m[20][20];
	int n;
	cin >> n;
	int o = 1;
	for(int y = 1 ; y <= n ; ++y){	
		if(o > 1)
			cout << '\n';
		for(int i = 1 ; i <= 9 ; ++i)
			for(int j = 1 ; j <= 9 ; ++j)
				cin >> m[i][j];

		int vet[10];
		bool flag = false;
		int j = 1;
		while(j < 10){
			memset(vet,0,sizeof(vet));
			for(int i = 1 ; i <= 9 ; ++i)
				vet[m[i][j]]++;

			for(int i = 1 ; i < 10 ; ++i)
				if(vet[i] != 1){
					flag = true;
					break;
				}
			j++;
		}
		if(!flag){
			j = 1;
			while(j < 10){
				memset(vet,0,sizeof(vet));
				for(int i = 1 ; i <= 9 ; ++i)
					vet[m[j][i]]++;

				for(int i = 1 ; i < 10 ; ++i)
					if(vet[i] != 1){
						flag = true;
						break;
					}
				j++;
			}
		}


		//////

		if(!flag){
			memset(vet,0,sizeof(vet));
			for(int i = 1 ; i <= 3  ; ++i)
				for(int j = 1 ; j <= 3 ; ++j)
					vet[m[i][j]]++;			

			for(int i = 1 ; i < 10 ; ++i)
				if(vet[i] != 1){
					flag = true;
					break;
				}
		}

		if(!flag){
			memset(vet,0,sizeof(vet));
			for(int i = 1 ; i <= 3  ; ++i)
				for(int j = 4 ; j <= 6 ; ++j)
					vet[m[i][j]]++;			

			for(int i = 1 ; i < 10 ; ++i)
				if(vet[i] != 1){
					cout << vet[i] << ' ';
					flag = true;
					break;
				}
		}

		if(!flag){
			memset(vet,0,sizeof(vet));
			for(int i = 1 ; i <= 3  ; ++i)
				for(int j = 7 ; j <= 9 ; ++j)
					vet[m[i][j]]++;			

			for(int i = 1 ; i < 10 ; ++i)
				if(vet[i] != 1){
					flag = true;
					break;
				}
		}


		/////////

		if(!flag){
			memset(vet,0,sizeof(vet));
			for(int i = 4 ; i <= 6  ; ++i)
				for(int j = 1 ; j <= 3 ; ++j)
					vet[m[i][j]]++;			

			for(int i = 1 ; i < 10 ; ++i)
				if(vet[i] != 1){
					flag = true;
					break;
				}
		}

		if(!flag){
			memset(vet,0,sizeof(vet));
			for(int i = 4 ; i <= 6  ; ++i)
				for(int j = 4 ; j <= 6 ; ++j)
					vet[m[i][j]]++;			

			for(int i = 1 ; i < 10 ; ++i)
				if(vet[i] != 1){
					flag = true;
					break;
				}
		}

		if(!flag){
			memset(vet,0,sizeof(vet));
			for(int i = 4 ; i <= 6  ; ++i)
				for(int j = 7 ; j <= 9 ; ++j)
					vet[m[i][j]]++;			

			for(int i = 1 ; i < 10 ; ++i)
				if(vet[i] != 1){
					flag = true;
					break;
				}
		}


		//
		if(!flag){
			memset(vet,0,sizeof(vet));
			for(int i = 7 ; i <= 9  ; ++i)
				for(int j = 1 ; j <= 3 ; ++j)
					vet[m[i][j]]++;			

			for(int i = 1 ; i < 10 ; ++i)
				if(vet[i] != 1){
					flag = true;
					break;
				}
		}

		if(!flag){
			memset(vet,0,sizeof(vet));
			for(int i = 7 ; i <= 9  ; ++i)
				for(int j = 4 ; j <= 6 ; ++j)
					vet[m[i][j]]++;			

			for(int i = 1 ; i < 10 ; ++i)
				if(vet[i] != 1){
					flag = true;
					break;
				}
		}

		if(!flag){
			memset(vet,0,sizeof(vet));
			for(int i = 7 ; i <= 9  ; ++i)
				for(int j = 7 ; j <= 9 ; ++j)
					vet[m[i][j]]++;			

			for(int i = 1 ; i < 10 ; ++i)
				if(vet[i] != 1){
					flag = true;
					break;
				}
		}

		cout << "Instancia " << y << "\n";
		if(!flag)
			cout << "SIM" << "\n";
		else
			cout << "NAO" << "\n";
	++o;
	}
	cout << "\n";	
	return 0;
}
