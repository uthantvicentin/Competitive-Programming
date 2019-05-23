#include <stdio.h>

int main(){
  int i,j=0,k=0,x=0,y=0;
  char n1[8] = "Roberto",n2[5] = "5786", n3[7] = "UNIFEI";
  for(i=0;i<39;i++){
    if(i!=38)
    printf("-");
    else
      printf("-\n");
  }
    while(j<5){
      for(i=0;i<37;i++){
        if(i==0)
          printf("| ");
        else if((j==0)&&(i>7)&&(i<15)){
          printf("%c",n1[k]);
          k++;
        }
        else if((j==2)&&(i>7)&&(i<12)){
          printf("%c",n2[x]);
          x++;
        }
        else if((j==4)&&(i>7)&&(i<14)){
            printf("%c",n3[y]);
            y++;
        }
        else if(i == 36)
          printf(" |\n");
        else if((j==1) && (i==36))
          printf(" |\n");
        else
          printf(" ");
    }
    j++;
  }
  for(i=0;i<39;i++){
    if(i!=38)
    printf("-");
    else
      printf("-\n");
  }

  return 0;
}
