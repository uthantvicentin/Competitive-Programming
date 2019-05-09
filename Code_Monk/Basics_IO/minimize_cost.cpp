#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	
	int j = 0;
	for(int i = 0 ; i < n ; ++i){
		if(arr[i]<0)
			continue;

		while(i-j>k)
			++j;
		while(arr[i]!=0 && (i+k)>=min(n-1,j)){
			if(arr[j] > 0){
				j++;
				continue;
			}

			int x = min(arr[i],abs(arr[j]));
			arr[i]-=x;
			arr[j]+=x;
			if(arr[j] >= 0)
				j++;
		}
	}
	
	long long  ans =0;
	
	for(int i=0;i<n;i++)
		ans+=abs(arr[i]);

	printf("%lld\n",ans);	
}


/*
3 2
3 -1 -2


3 
-1
j = 0 i = 1;

*/


