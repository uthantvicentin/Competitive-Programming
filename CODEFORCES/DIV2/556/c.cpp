#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	int n,v[200000];
	int soma = 0,c1 = 0,c2 = 0;
	cin >> n;
	for(int i = 0 ; i < n ; ++i){
		cin >> v[i];
		if(v[i] == 1)
			c1++;
		else
			c2++;
	}
			if(c1 == 0)
				for(int i = 0 ; i < n ; ++i)
					printf("2 ");
			else if(c2 == 0)
				for(int i = 0 ; i < n ; ++i)
					printf("1 ");
			else{
				printf("2 1 ");
				for(int i = 1 ; i < c2 ; ++i)
					printf("2 ");
				for(int i = 1 ; i < c1 ; ++i)
					printf("1 ");	
			}		
	
		return 0;
}

