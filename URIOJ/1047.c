#include <stdio.h>
int main(){
   int a, c, b, d, hora, minuto;
   scanf("%d %d %d %d", &a, &b, &c, &d);

   hora = c - a;
   minuto = d - b;

   if (hora < 0)
       hora = 24 + (c - a);

  if (minuto < 0){
    minuto = 60 + (d - b);
    hora--;
 }
   if ((a == c) && (b == d))
       printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

   else
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);

   return 0;
}
