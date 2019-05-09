#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#define MAX 51234
#define LEN 23

int cmp(const void *a, const void *b){
	int ret = strcasecmp((char*)a, (char*)b);	
	if(ret == 0)
		return strcmp((char*)a, (char*)b);
	return ret;
}


int main(){
	int n;
	char v[MAX][LEN];
	while(scanf("%d ",&n) != EOF){
		for(int i = 0 ; i < n ; ++i) fgets(v[i],23,stdin); 
	
		qsort(v,n,sizeof(v[0]),&cmp);
		
		for(int i = 0 ; i < n ; ++i) printf("%s",v[i]);
	
	}
	return 0;
}

