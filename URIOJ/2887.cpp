#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb emplace_back
#define x first
#define y second
#define sz(a) ((int)(a).size())
#define rep(i,a,b) for(auto i=(a); i<(b); i++)
#define dec(i,n,a) for(auto i=(n); i>=(a); i--)
#define clr(a,v) memset(a, v, sizeof(a))
#define all(a) (a).begin(),(a).end()
#define EPS 3e-8
#define fcin ios_base::sync_with_stdio(false)
#define db(x) cerr << #x << " == " << x << endl
#define _ << " " <<
#define MAXN 101010
#define LOGN 20
typedef long long ll;
typedef double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;

vector <int> adj[MAXN];
int nvl[MAXN], anc[MAXN][LOGN];

void dfs(int v, int pr) {
	for(int i = 0 ; i < adj.size() ; ++i)
		if(adj[v][i] != pr) {
			int u = adj[v][i];
			nvl[u] = nvl[v] + 1;
			anc[u][0] = v;
			rep(j,1,LOGN) anc[u][j] = anc[anc[u][j-1]][j-1];
			dfs(u, v);
		}
}


int LCA(int u, int v) {
	if(nvl[u] < nvl[v])
		 swap(u,v);
	int diff = nvl[u] - nvl[v];
	dec(i,LOGN-1,0) if((1<<i) <= diff) u = anc[u][i], diff -= (1<<i);
	if(u == v) return u;
	dec(i,LOGN-1,0) if(anc[u][i] != anc[v][i]) {
		u = anc[u][i];
		v = anc[v][i];
	}
	return anc[u][0];
}

int sobe(int v, int diff){
	rep(j,0,LOGN) 
		if(diff&(1<<j)) 
			v = anc[v][j];
	return v;
}

vector<pii> get(int a, int b){
	if(nvl[a] > nvl[b]) swap(a,b);
	int lca = LCA(a,b);
	vector<pii> ret;
	ret.pb(mp(b,lca));
	if(lca == a) return ret;
	lca = sobe(a, nvl[a] - nvl[lca] - 1);
	ret.pb(mp(a,lca));
	return ret;
}

int query(pii c1, pii c2){
	int lca = LCA(c1.x,c2.x);
	return max(0, nvl[lca] - max(nvl[c1.y], nvl[c2.y]) + 1);
}

int main(){
	int n, q;
	scanf("%d%d", &n, &q);
	rep(i,1,n){
		int u, v;
		scanf("%d%d", &u, &v);
		u--, v--;
		adj[u].pb(v);
		adj[v].pb(u);
	}
	dfs(0,0);
	rep(i,0,q){
		int a, b, c, d, ans = 0;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		a--, b--, c--, d--;
		vector<pii> x = get(a,b), y = get(c,d);
		rep(j,0,sz(x)) rep(k,0,sz(y))
			ans += query(x[j], y[k]);
		printf("%d\n", ans);
	}
}
