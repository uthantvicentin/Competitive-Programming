#include <stdio.h>

int main() {

    int a, b, c, i,soma[3],menor=2147483;
    scanf("%d %d %d", &a, &b, &c);
      soma[0] = 2*b+4*c;
      soma[1] = (a+c)*2;
      soma[2] = 2*b+4*a;
      for(i=0;i<=2;i++)
        if(soma[i]<menor)
          menor=soma[i];
        printf("%d\n", menor);

    return 0;
}
