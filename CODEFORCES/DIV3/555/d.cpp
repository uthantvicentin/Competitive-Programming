#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	int n;
	cin >> n;
	int a[n],last,len = 0;
	string ans;
	for(int i = 1 ; i <= n ; ++i)
		cin >> a[i];
	last = -1;
	
	int l = 1, r = n;
	char ch[200010];
	
	while(l <= r){

		int x = min(a[l],a[r]);
		
		if(x > last){
			if(a[l] == a[r]){
				int t = l,cl=0, cr =0;
				while(a[t] < a[t+1]) t++,cl++;
				t = r;
				while(a[t] < a[t-1]) t--,cr++;
				last = x;
				if(cl > cr){
				  l++; ans+='L';
				}
				else{
					r--; ans+='R';	
				}
			}
			else{
				last = x;
				if(a[r] == x)	ans+='R', r--;
				else ans+='L', l++;
			}
		}

		else if(max(a[l],a[r]) <= last) break;
		
		else{
			if(a[r] > last){
				last = a[r--];
				ans+='R';
			}
			else if(a[l] > last){
				last = a[l++];
				ans+='L';
			}
		}
	}
	
 cout << ans.length() << endl << ans << endl;
	return 0;
}
