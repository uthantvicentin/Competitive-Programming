#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0);

using namespace std;


#define MAXN 50005
#define SQRSIZE 223

int arr[MAXN];
int block[SQRSIZE];
int blk_sz;
int vet[1000000005][1];

void insere(int idx, int val){
	int blockNumber = idx / blk_sz;
	block[blockNumber]++;
}

int query(int l,int r){
	int sum = 0;
	l++;
	while(l<r-1 and l % blk_sz != 0 and l != 0)
		sum++;

	while(l+blk_sz <= r-1){
		sum += block[l/blk_sz];
		l += blk_sz;
	}

	while(l <= r-1){
		sum++;
		l++;
	}

	return sum;
}


void preprocess(int *v,int n){
	int blk_idx = -1;
	blk_sz = sqrt(n);

	for(int i = 0 ; i < n ; ++i){
		arr[i] = v[i];
		if(i % blk_sz == 0)
			blk_idx++;
		block[blk_idx]++;
	}

}


int main(){
	int n,m;
	int v[50005];
	int x;
	memset(&vet,0,sizeof(vet));
	for(int i = 0 ; i < n ; ++i){
		scanf("%d",&v[i]);
		vet[v[i]][i] = i;
	}

	cin >> m;
	char q;
	int o,p;
	while(m--){
		scanf("%c",&q);
		if(q == 'Q'){
			scanf("%d %d",&o,&p);
		}
		else if(q == 'I'){
			scanf("%d %d",&o,&p);

		}
		else{
			scanf("%d",&o);
		}
	}

	return 0;
}

