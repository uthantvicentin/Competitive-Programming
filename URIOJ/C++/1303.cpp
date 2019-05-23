#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;
struct time{
	int num;
	int s;
	int m;
	int v;

};

bool comp( struct time a, struct time b){
	if(b.v != a.v)
		return b.v < a.v;

	if(b.s == 0) b.s = 1;
	if(a.s == 0) b.s = 1;
	
	if(b.m/(double)b.s != a.m/(double)a.s)
		return b.m/(double)b.s < a.m/(double)a.s;
	
	if(b.m != a.m)
	return b.m < a.m;
	
	return b.num < a.num;
			
}

int main(){
	IOS;
	int n;
	int j = 1;
	while(cin >> n and n){
		struct time t[n];
		memset(t,0,sizeof(t));
		int u,i,o,p;
		if(j != 1)
			printf("\n");
		for(int l = 0 ; l < n*(n-1)/2; ++l){
			cin >> u >> i >> o >> p;
			u--;
			o--;
			if(i > p){
				t[u].v += 2;
				t[u].num = u;
				t[u].s += p;
				t[u].m += i;
			
				t[o].v++;	
				t[o].num = o;
				t[o].s += i;
				t[o].m += p;
			}

			else{
				t[o].v += 2;
				t[o].num = o;
				t[o].s += i;
				t[o].m += p;
				
				t[u].v++;
				t[u].num = u;
				t[u].s += p;
				t[u].m += i;
			}
		}

		
		sort(t,t+n,comp);
		printf("Instancia %d\n",j++);
		for(int i = 0 ; i < n ; ++i){
				if(i < n-1)
					printf("%d ",t[i].num+1);
				else
					printf("%d\n",t[i].num+1);
		}
	}
	return 0;
}

