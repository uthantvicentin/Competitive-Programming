#include <stdio.h>

int main(){
  int i,n,resto[100],divisao[100],tl=0;
  scanf("%d",&n);
  if(n<=15){
    switch(n){
        case 10:
            printf("A\n");
        break;
        case 11:
            printf("B\n");
        break;
        case 12:
            printf("C\n");
        break;
        case 13:
            printf("D\n");
        break;
        case 14:
            printf("E\n");
        break;
        case 15:
            printf("F\n");
        break;
        default:
          printf("%d\n",n);
    }
  }
  else{
      divisao[0]=n/16;
      resto[0]=n%16;
      tl++;
      while(1){
        if(divisao[tl-1]<16)
          break;
        resto[tl]=divisao[tl-1]%16;
        divisao[tl]=divisao[tl-1]/16;
        tl++;
      }
      switch(divisao[tl-1]){
          case 10:
              printf("A");
          break;
          case 11:
              printf("B");
          break;
          case 12:
              printf("C");
          break;
          case 13:
              printf("D");
          break;
          case 14:
              printf("E");
          break;
          case 15:
              printf("F");
          break;
          default:
            printf("%d",divisao[tl-1]);
      }
      for(i=tl-1;i>=0;i--){
      switch(resto[i]){
          case 10:
              printf("A");
          break;
          case 11:
              printf("B");
          break;
          case 12:
              printf("C");
          break;
          case 13:
              printf("D");
          break;
          case 14:
              printf("E");
          break;
          case 15:
              printf("F");
          break;
          default:
            printf("%d",resto[i]);
      }
    }
    printf("\n");
  }
  return 0;
}
