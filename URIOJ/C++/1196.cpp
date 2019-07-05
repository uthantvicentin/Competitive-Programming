#include <bits/stdc++.h>

using namespace std;

int main(){
	char str[48] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	char k;
	while(scanf("%c",&k) != EOF){
		for(int i = 0 ; i < 48 ; ++i){
			if(k == str[i]){
				printf("%c",str[i-1]);
				break;
			}
			else if(k == ' '){
				printf(" ");
				break;	
			}
			else if(k == '\n'){
				printf("\n");
				break;
			}
		}	
	}
	return 0;
}
