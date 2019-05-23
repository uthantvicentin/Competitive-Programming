#include <stdio.h>
int main(){
    int a[4],i,j,d,aux,f, g;
    for(i=0; i<4; i++)
        scanf("%d", &a[i]);
    for(i=0;i<4;i++){
        for(j=i+1; j<4; j++){
            if(a[j]<a[i]){
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
    g=a[1]+a[2];
    f=a[0]+a[1];
    if(a[3]<g || a[2]<f)
    printf("S\n");
    else
     printf("N\n");
    return 0;
}
