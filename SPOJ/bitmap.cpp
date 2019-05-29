#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

const int MAX = 34000;

int n,m,t;

int a[200][200];
int v[200][200];
int d[200][200];

typedef struct ll{
	int horz;
	int vert;
}moves;

moves move1[4];

queue <pair <int,int> >q;

void bfs(){
	pair <int,int> p,temp;
	int x,y;
	while(!q.empty()){
		p = q.front();
		q.pop();
		for(int i = 0 ; i < 4 ; ++i){
			x = p.first + move1[i].horz;
			y = p.second + move1[i].vert;
			if( x >= 0 && x < n && y >= 0 && y < m && !v[x][y] ){
				v[x][y] = 1;
				d[x][y] = d[p.first][p.second]+1;
				temp.first = x;
				temp.second = y;
				q.push(temp);
			}
		}
	}
}


int main(){

	move1[0].horz = 0;
	move1[0].vert = -1;
	move1[1].horz = 0;
	move1[1].vert = 1;
	move1[2].horz = -1;
	move1[2].vert = 0;
	move1[3].horz = 1;
	move1[3].vert = 0;

	pair < int, int > p;
	while(cin >> t){
		for(int o = 0 ; o < t ; ++o){
			cin >> n >> m;
			for(int i = 0 ; i < n ; ++i)
				for(int j = 0 ; j < m ; ++j){
					scanf("%1d",&a[i][j]);
					if(a[i][j] == 1){
						p.first = i;
						p.second = j;
						q.push(p);
						v[i][j] = 1;
						d[i][j] = 0;
					}
					else{
						v[i][j] = 0;
						d[i][j] = MAX;
					}
				}

			bfs();

			for(int i = 0 ; i < n ; ++i){
				for(int j = 0 ; j < m ; ++j)
					cout << d[i][j] << ' ';
				cout << endl;
			}
		}
	}
	return 0;
}
