#include <stdio.h>
#include <math.h>
int main(){
    double n, x, y;
    scanf("%lf", &n);
    x = n/log(n);
    y = (1.25506)*(n/log(n));
    printf("%.1lf %.1lf\n", x, y);
    return 0;
}
