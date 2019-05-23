#include <stdio.h>
#include <stdlib.h>
int main(){
  int soma=0,count=0;
  char n[10];
  while(1){
    gets(n);
    if(n[0]=='c'){
      printf("%d\n",soma);
      soma=0;
      count++;
    }
    if((n[0]=='-')&&(n[1]=='-')&&(n[2]=='*'))
      soma+=1;
    else if((n[0]=='-')&&(n[1]=='*')&&(n[2]=='-'))
      soma+=2;
    else if((n[0]=='*')&&(n[1]=='-')&&(n[2]=='-'))
      soma+=4;
    else if((n[0]=='*')&&(n[1]=='*')&&(n[2]=='-'))
      soma+=6;
    else if((n[0]=='*')&&(n[1]=='-')&&(n[2]=='*'))
      soma+=5;
    else if((n[0]=='*')&&(n[1]=='*')&&(n[2]=='*'))
      soma+=7;
    else if((n[0]=='-')&&(n[1]=='*')&&(n[2]=='*'))
      soma+=3;
    else
      soma+=0;
    if(count==3){
      break;
    }
  }


  return 0;
}
