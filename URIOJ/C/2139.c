#include <stdio.h>

int main(){
  int i,a,b,aux=0,x;
  while(scanf("%d %d",&a,&b)!=EOF){
    aux=0;
    if(a==12 && b == 25)
      printf("E natal!\n");
    else if(a==12 && b>25)
      printf("Ja passou!\n");
    else if(a==12 && b==24)
      printf("E vespera de natal!\n");
    else{
      for(i=a;i<=12;i++){
        switch(i){
          case 1:
            aux+=31;
          break;

          case 2:
            aux+= 29;
          break;

          case 3:
            aux+= 31;
          break;

          case 4:
            aux+=30;
          break;

          case 5:
            aux+=31;
          break;

          case 6:
            aux+= 30;
          break;

          case 7:
            aux+= 31;
          break;

          case 8:
            aux+=31;
          break;

          case 9:
            aux+=30;
          break;

          case 10:
            aux+=31;
          break;

          case 11:
            aux+= 30;
          break;

          case 12:
            aux+=25;
          break;
      }
    }
      x=aux-b;
      printf("Faltam %d dias para o natal!\n",x);
    }

  }

  return 0;
}
