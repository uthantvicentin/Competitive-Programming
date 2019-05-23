#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	int n;
	int cont = 0;
	char m[55][55];
	cin >> n;
	for(int i = 0; i < n ; ++i) cin >> m[i];
	for(int i = 0 ; i < n ; ++i)
		for(int j = 0 ; j < n ; ++j){
			if(m[i][j] == '.'){
				cont++;
				if(j == 0 || j == n-1)
					continue;
				if(m[i+1][j] == '.')
					if(m[i+2][j] == '.')
						if(m[i+1][j-1] == '.')
							if(m[i+1][j+1] == '.'){
								m[i][j] = '#';
								m[i+1][j] = '#';
								m[i+2][j] = '#';
								m[i+1][j-1] = '#';
								m[i+1][j+1] = '#';
								cont--;
							}	
			}
		}
	if(cont > 0)
		printf("NO\n");
	else
		printf("YES\n");

	return 0;
}

