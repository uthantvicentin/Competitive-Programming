#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

#define MAXN 100005
#define SQRSIZE 316 

int arr[MAXN];
int block[SQRSIZE][100005];
int blk_sz; 

void update(int idx, int val) { 
	int blockNumber = idx / blk_sz; 
	block[blockNumber][val]++;
	if(block[blockNumber][arr[idx]] > 0)
		block[blockNumber][arr[idx]]--; 
	arr[idx] = val; 
} 

int query(int l, int r,int x) { 
	int sum = 0; 
	while (l<r and l%blk_sz!=0 and l!=0) { 
		if(arr[l] != x)
			sum++;
		l++; 
	} 
	while (l+blk_sz <= r) { 
		sum = sum + abs(block[l/blk_sz][x] - blk_sz); 
		l += blk_sz; 
	} 
	while (l<=r){
		if(arr[l] != x) 
			sum++; 
		l++; 
	} 
	return sum; 
} 

void preprocess(int input[], int n){ 
	int blk_idx = -1; 
	blk_sz = sqrt(n); 
	for (int i=0; i<n; i++){ 
		arr[i] = input[i]; 
		if (i%blk_sz == 0){ 
			blk_idx++; 
		}
		block[blk_idx][arr[i]]++;  
	} 
} 

int main(){ 
	IOS
		int n,m;
	cin >> n >> m;
	int v[n];
	for(int i = 0 ; i < n ; ++i)		
		cin >> v[i];

	memset(&block,0,sizeof(block));
	preprocess(v, n); 
	int x,y,w,o;	
	while(m--){	
		cin >> o;
		if(o == 1){
			cin >> x >> w;
			update(x-1,w);
		}
		else{
			cin >> x >> y >> w;
			cout <<query(x-1, y-1,w) << '\n'; 
		}
	}
	return 0; 
} 

