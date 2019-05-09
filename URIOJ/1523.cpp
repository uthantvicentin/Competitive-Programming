#include <bits/stdc++.h>

#define SC2(a, b) scanf("%d %d", &a, &b)
#define ZERO(x) memset(x, 0, sizeof(x))

using namespace std;

typedef stack<int> SI;

SI p;
int in[1000010], out[1000010], k;

int main(){
	int n, c, s;

	while(cin >> n >> k and n){	
		int lt = 0;	

		memset(in,0,sizeof in);
		memset(out,0,sizeof out);

		for(int i = 1; i <= n; i++){
			cin >> c >> s;	
			in[c] = i;
			out[s] = i;
			lt = max(lt, s+1);
		}
		p = {};
		
		int i;
		
		for(i = 0; i < lt; i++){
			if(out[i]){
				if(p.empty() || p.top() != out[i]) break;
				else p.pop();
			}

			if(in[i]){
				if((int)p.size() < k) p.push(in[i]);
				else break;
			}
		}
		printf("%s\n", i == lt ? "Sim" : "Nao");
	}
	return 0;
}



/*
3 2
1 10
2 5
6 9

in 1,2,6
out 10,5,9
lt 10
0 1 
1
*/
