#include <bits/stdc++.h>
#define MAX 400005 

long long tree[MAX];
long long lazy[MAX];

void updateRangeUtil(long long si, long long ss, long long se, long long us, long long ue, long long diff){ 
	if (lazy[si] != 0){ 
		tree[si] += (se-ss+1)*lazy[si]; 

		if (ss != se){ 
			lazy[si*2 + 1] += lazy[si]; 
			lazy[si*2 + 2] += lazy[si]; 
		} 

		lazy[si] = 0; 
	} 

	if (ss>se || ss>ue || se<us) 
		return ; 

	if (ss>=us && se<=ue){ 
		tree[si] += (se-ss+1)*diff; 

		if (ss != se){ 
			lazy[si*2 + 1] += diff; 
			lazy[si*2 + 2] += diff; 
		} 
		return; 
	} 

	long long mid = (ss+se)/2; 
	updateRangeUtil(si*2+1, ss, mid, us, ue, diff); 
	updateRangeUtil(si*2+2, mid+1, se, us, ue, diff); 

	tree[si] = tree[si*2+1] + tree[si*2+2]; 
} 

void updateRange(long long n, long long us, long long ue, long long diff){ 
	updateRangeUtil(0, 0, n-1, us, ue, diff); 
} 

long long getSumUtil(long long ss, long long se, long long qs, long long qe, long long si){ 
	if (lazy[si] != 0){ 
		tree[si] += (se-ss+1)*lazy[si]; 

		if (ss != se){ 
			lazy[si*2+1] += lazy[si]; 
			lazy[si*2+2] += lazy[si]; 
		} 

		lazy[si] = 0; 
	} 

	if (ss>se || ss>qe || se<qs) 
		return 0; 

	if (ss>=qs && se<=qe) 
		return tree[si]; 

	long long mid = (ss + se)/2; 
	return getSumUtil(ss, mid, qs, qe, 2*si+1) + 
		getSumUtil(mid+1, se, qs, qe, 2*si+2); 
} 

long long getSum(long long n, long long qs, long long qe){ 
	if (qs < 0 || qe > n-1 || qs > qe) 
		return -1; 

	return getSumUtil(0, n-1, qs, qe, 0); 
} 
void constructSTUtil(long long arr[], long long ss, long long se, long long si){ 
	if (ss > se) 
		return ; 

	if (ss == se){ 
		tree[si] = arr[ss]; 
		return; 
	} 

	long long mid = (ss + se)/2; 
	constructSTUtil(arr, ss, mid, si*2+1); 
	constructSTUtil(arr, mid+1, se, si*2+2); 

	tree[si] = tree[si*2 + 1] + tree[si*2 + 2]; 
} 

void constructST(long long arr[], long long n){ 
	constructSTUtil(arr, 0, n-1, 0); 
} 


int main(){
	long long z;
	scanf("%lld",&z);
	while(z--){
		long long q,n;
		scanf("%lld %lld",&n,&q);
		long long arr[n];
		memset(arr,0,sizeof(arr));
		memset(tree,0,sizeof(tree));
		memset(lazy,0,sizeof(lazy)); 
		constructST(arr, n); 
		long long c,l,r,v;
		for(long long i = 0 ; i < q ; ++i){
			scanf("%lld",&c);
			if(c == 0){
				scanf("%lld %lld %lld",&l,&r,&v);
				updateRange(n, l-1, r-1, v);
			}
			else{
				scanf("%lld %lld",&l,&r);
				printf("%lld\n",getSum(n, l-1, r-1));
			}
		}
	}
	return 0; 
} 

