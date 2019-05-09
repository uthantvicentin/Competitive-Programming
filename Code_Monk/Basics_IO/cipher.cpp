#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	char str[1005],a;
	int n,x,cont;
	fgets(str,1000,stdin);	
	scanf("%d",&n);
	for(int i = 0 ; i < strlen(str) ; ++i){
		cont = 0;
		if(isalpha(str[i])){
			if(isupper(str[i])){
				while(cont < n){
					str[i]++;
					if(str[i] > 90)
						str[i]-=26;
					cont++;
				}
			}
			else{
				while(cont < n){
					str[i]++;
					if(str[i] > 122)
						str[i]-=26;
					cont++;
				}
			}
		}
		else if(isdigit(str[i])){
			while(cont < n){
				str[i]++;
				if(str[i] > 57)
					str[i]-=10;
				cont++;
			}

		}
		printf("%c",str[i]);		
	}	
	return 0;
}

