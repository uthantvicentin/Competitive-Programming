#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000009];
vector<int>v1;

int vis[1000009];

void dfs(int x){
	v1.push_back(x);
	int s = v[x].size();
	vis[x] = 1;
	for(int i = 0 ; i < s ; ++i){
		if(!vis[v[x][i]]){
			dfs(v[x][i]);
			v1.push_back(x);
		}
	}
}

int main(){
	std::ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m,i,j,k,l,a,b;
	cin >> n >> m;
	while(m--){
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	dfs(1);

	auto itr = v1.begin();
	cout << v1.size() << "\n";
	for(;itr!=v1.end();itr++)
		cout << *itr << " ";
}
