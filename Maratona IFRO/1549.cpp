#include <bits/stdc++.h>
#define PI 3.141592

typedef double dd;
typedef long long ll;
using namespace std;

dd volume(dd h,dd b,dd B,dd H){
		
		dd r = b + (h*(B-b))/H;
    return ((h*PI)/3.0)*(r*r + b*b + r*b);
}

dd bs(dd b,dd B,dd H,dd V){

		dd h = H/2.0;
	  while((ll)volume(h,b,B,H) != (ll)V){
        if(volume((h/2.0),b,B,H) > V)
            h = h - h/2.0;
        else if(volume((h/2.0),b,B,H) < V)
            h = h + h/2.0;
    }
    return h;
}

int main(){
    int n;

    scanf("%d",&n);

    while(n--){
        dd N,L,b,B,H;
        scanf("%lf %lf %lf %lf %lf",&N,&L,&b,&B,&H);
        dd V = L/N;
        printf("%.2f\n",bs(b,B,H,V));
    }
    return 0;
}

