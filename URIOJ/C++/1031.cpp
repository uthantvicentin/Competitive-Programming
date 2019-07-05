#include <bits/stdc++.h>

int josephus(int n, int k) { 
	if (n == 1) 
		return 1; 
	else
		return (josephus(n - 1, k) + k-1) % n + 1; 
} 

int main(){ 
	int n,i;
	while(1){
		scanf("%d",&n); 
		if(n == 0)
			break;
			i = 1;
		for(;;){
			if(josephus(n-1,i) == 12)
				break;
			i++;
		}

		printf("%d\n",i);
	}
	return 0; 
} 

