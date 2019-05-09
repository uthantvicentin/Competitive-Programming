#include <stdio.h>

int main(){
  int i,j;
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
        if(i == 36)
          printf("|\n");
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
