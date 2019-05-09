#include <stdio.h>

int main(){
   int n,i,j,s;
   while(scanf("%d",&n)!=EOF){
       int m[n][n];
       for(i=0; i<n; i++){
           for(j=0; j<n; j++)
               m[i][j]=3;
       }
       for(i=0; i<n; i++)
           m[i][i]=1;
       s=n-1;
       for(i=0,j=s; i<n;i++,j--)
           m[i][j]=2;
       for(i=0; i<n; i++){
           for(j=0; j<n; j++)
               printf("%d",m[i][j]);
           printf("\n");
       }
   }
   return 0;
}
