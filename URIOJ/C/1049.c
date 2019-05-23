#include <stdio.h>
#include<string.h>

int main(){
  char p1[13],p2[9],p3[10],resposta[12];
  scanf("%s %s %s",&p1,&p2,&p3);

  if(strcmp("vertebrado",p1)==0){
    if(strcmp("ave",p2)==0){
      if(strcmp("carnivoro",p3)==0)
        strcpy(resposta,"aguia");
      else
        strcpy(resposta,"pomba");
    }
    else{
      if(strcmp("onivoro",p3)==0)
        strcpy(resposta,"homem");
      else
        strcpy(resposta,"vaca");
    }
  }
  else{
    if(strcmp("inseto",p2)==0){
      if(strcmp("hematofago",p3)==0)
        strcpy(resposta,"pulga");
      else
        strcpy(resposta,"lagarta");
    }
    else{
      if(strcmp("hematofago",p3)==0)
        strcpy(resposta,"sanguessuga");
      else
        strcpy(resposta,"minhoca");
    }
  }
  printf("%s\n",resposta);
  return 0;
}
