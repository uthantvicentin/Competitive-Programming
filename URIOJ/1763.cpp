#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	unordered_map <string, string> pais;
	pais["brasil"] = "Feliz Natal!";
	pais["alemanha"] = "Frohliche Weihnachten!";
	pais["austria"] = "Frohe Weihnacht!";
	pais["coreia"] = "Chuk Sung Tan!";
	pais["espanha"] = "Feliz Navidad!";
	pais["grecia"] = "Kala Christougena!";
	pais["estados-unidos"] = "Merry Christmas!";
	pais["inglaterra"] = "Merry Christmas!";
	pais["australia"] = "Merry Christmas!";
	pais["portugal"] = "Feliz Natal!";
	pais["suecia"] = "God Jul!";
	pais["turquia"] = "Mutlu Noeller";
	pais["argentina"] = "Feliz Navidad!";
	pais["chile"] = "Feliz Navidad!";
	pais["mexico"] = "Feliz Navidad!";
	pais["antardida"] = "Merry Christmas!";
	pais["canada"] = "Merry Christmas!";
	pais["irlanda"] = "Nollaig Shona Dhuit!";
	pais["belgica"] = "Zalig Kerstfeest!";
	pais["italia"] = "Buon Natale!";
	pais["libia"] = "Buon Natale!";
	pais["siria"] = "Milad Mubarak!";
	pais["marrocos"] = "Milad Mubarak!";
	pais["japao"] = "Merii Kurisumasu!";

	string lugar;
	while(cin >> lugar){
		if(pais.count(lugar))
			cout << pais[lugar] << '\n';
		else
			cout << "--- NOT FOUND ---" << '\n';
	}
	return 0;
}
