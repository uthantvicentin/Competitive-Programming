
#include <stdio.h>
#include <string.h>
int main(){
    int n;
    char a[10], b[10];
    scanf("%d", &n);
    while(n--){
        scanf("%s", a);
        scanf("%s", b);
        if((strcmp(a,"pedra")==0)&&(strcmp(b,"pedra")==0))
         printf("Sem ganhador\n");
        else if((strcmp(a,"ataque")==0)&&(strcmp(b,"ataque")==0))
          printf("Aniquilacao mutua\n");
        else if((strcmp(a,"papel")==0)&&(strcmp(b,"papel")==0))
         printf("Ambos venceram\n");
        else if(a[1]=='t' || (a[1]=='e' && b[1]=='a'))
            printf("Jogador 1 venceu\n");
        else
        printf("Jogador 2 venceu\n");
    }
    return 0;
}
