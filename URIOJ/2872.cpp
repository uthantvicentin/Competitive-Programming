#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int mygets(char *s, int size){
	int len;
	if( fgets( s, size, stdin) == NULL ) return 0;
	len = strlen( s );
	if( len > 0 && s[len-1] == '\n' ) s[--len] = '\0';
	if( len > 0 && s[len-1] == '\r' ) s[--len] = '\0';
	return len;
}

int main(){
	multiset <string> funciona;
	char palavra[10000][20];

	int n,i = 0,newline = 0;

	while(scanf("%d",&n)!= EOF){
		scanf("\n");
		while(1){
			mygets(palavra[i],16);
			if(*palavra[i] == '0') break;	
			funciona.insert(palavra[i]);
			++i;
		}
		if(newline!= 0)
			printf("\n");
		auto it = funciona.begin();
		for( ; it != funciona.end() ; ++it) cout << *it << '\n';	
		newline++;	
		funciona.clear();
	}
	cout << '\n';


	return 0;
}
