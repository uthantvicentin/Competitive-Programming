#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main(){
	//IOS;
	set <int> p;
	p.insert(67);
	p.insert(71);
	p.insert(73);
	p.insert(79);
	p.insert(83);
	p.insert(89);
	p.insert(97);
	p.insert(101);
	p.insert(103);
	p.insert(107);
	p.insert(109);
	p.insert(113);

	int n,len;
	cin >> n;
	bool flag;
	string str;	
	while(n--){
		cin >> len >> str;	
		for(int i = 0 ; i < str.length() ; ++i){

			int x = int(str[i]);
			auto search = p.lower_bound(x);
			if(*search == x)
				printf("%c",str[i]);
			else{
				if(isupper(str[i])){

					if(x == 65)
						printf("%c",str[i] + 2);

					else{
						p.insert(x);
						auto it = p.lower_bound(x);
						auto l = prev(it);
						auto h = next(it);
						if( abs(x - *l) <= abs(*h - x) ) printf("%c",str[i] - ( x- *l));
						else printf("%c", (*h-x)+str[i]);	
						p.erase(it);
					}

				}	

				else{
					if(x == 122)
						printf("%c",str[i] - 9);
					else	if(x < 67)
						printf("C");
					else{
						p.insert(x);
						auto	it = p.lower_bound(x);
						auto l = prev(it);
						auto h = next(it);
						if( abs(x - *l) <= abs(*h - x)) printf("%c",str[i]- (x - *l));
						else printf("%c",(*h-x) + str[i]);	
						p.erase(it);
					}	
				}
			}
		}
		printf("\n");
	}

	return 0;
}



