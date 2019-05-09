#include <stdio.h>
int main(){
    int n, i, j;
    scanf("%d", &n);
    int m[n+1][n+1];
    for(i=0; i<=n; i++)
        for(j=0; j<=n; j++)
            scanf("%d", &m[i][j]);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(m[i][j]+m[i][j+1]+m[i+1][j]+m[i+1][j+1] < 2)
                printf("U");
            else
              printf("S");
        }
        printf("\n");
    }

    return 0;
}
