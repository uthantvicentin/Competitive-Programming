#include <bits/stdc++.h>

int main(){
    long long a,b,soma,i;
        scanf("%lld %lld", &a, &b);
        soma = (a + b) * (b - a + 1) / 2;
        printf("%lld\n", soma);
    return 0;
}
