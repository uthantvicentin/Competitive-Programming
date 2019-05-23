#include <bits/stdc++.h>


using namespace std;


int main(){
	string note;
	double cont;
	int x;
	while(cin >> note && note[0]!= '*'){
		cont = 0;
		x = 0;
		for(int i = 0 ; i < note.length(); i++){

			if(note[i] == '/'){
				if(cont == 1.0)
						x++;
				cont = 0;				
				}
				

			else	if(note[i] == 'W') 
				cont +=  1.00;
			else if(note[i] == 'H') 
				cont+= 0.5;
			else if(note[i] == 'Q') 
				cont+= 0.25;
			else if(note[i] == 'E') 
				cont+= 0.125;
			else if(note[i] == 'S') 
				cont+= 0.0625;
			else if(note[i] == 'T') 
				cont+= 0.03125;
			else
				cont+= 0.015625;
		}
		cout << x << '\n';


	}

	return 0;
}
