#include <bits/stdc++.h>

using namespace std;

struct crianca{
	string nome;
	int num;
	crianca(string nome, int num): nome(nome), num(num) {}
};

int main(){
	vector<crianca> c;
	string name;
	int num,n;
	while(cin >> n and n){
		
		for(int i = 0; i < n ; ++i){
			cin >> name >> num;
			c.push_back(crianca(name, num));
		}

		int idx = 0, k = c[0].num;
		
		while(n > 1){
			
			if(k % 2)
				idx = (idx + k) % n;
			else{
				idx = (idx - (k % n)) % n;
				if (idx < 0)
					idx = n + idx;
			}
			k = c[idx].num;
			c.erase(c.begin() + idx);
			if(k % 2)
				idx--;
			n--;

		}

		cout << "Vencedor(a): " << c[0].nome << '\n';
		c.clear();
	}
	return 0;
}
