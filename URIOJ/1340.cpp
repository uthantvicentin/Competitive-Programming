#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,x,y;
	queue <int> fila;
	priority_queue <int> filap;
	stack <int> pilha;

	while(cin >> n){

		bool vfila = true , vpilha = true ,vfilap = true;

		for(int i = 0 ; i < n ; i++){
			cin >> x >> y;
			if(x == 1){
				fila.push(y);
				filap.push(y);
				pilha.push(y);
			}
			else{

				if(pilha.top() != y)
					vpilha = false;
				else
					pilha.pop();


				if(fila.front() != y)
					vfila = false;
				else
					fila.pop();


				if(filap.top() != y)
					vfilap = false;
				else
					filap.pop();

			}
		}

		if(!vfila and !vpilha and !vfilap)
			cout << "impossible" << '\n';
		else if(vfila and vpilha)
			cout << "not sure" << '\n';
		else if(vfila and vfilap)
			cout << "not sure" << '\n';
		else if(vpilha and vfilap)
			cout << "not sure" << '\n';
		else if(vpilha)
			cout << "stack" << '\n';
		else if(vfila)
			cout << "queue" << '\n';
		else if(vfilap)
			cout << "priority queue" << '\n';

		fila = {};
		filap = {};
		pilha = {};

	}
	return 0;
}
