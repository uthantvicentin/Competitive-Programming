#include <stdio.h>
#include <string.h>

int main(){
  char s[20],r[20],a[20];
  int n,i;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%s %s",&s,&r);

  strcpy(a,"De novo!");
  if(strcmp(s,"tesoura")==0){
    if(strcmp(r,"papel")==0)
      strcpy(a,"Bazinga!");
  }
  if(strcmp(r,"tesoura")==0){
    if(strcmp(s,"papel")==0)
      strcpy(a,"Raj trapaceou!");
  }
  if(strcmp(s,"papel")==0){
    if(strcmp(r,"pedra")==0)
      strcpy(a,"Bazinga!");
  }
  if(strcmp(r,"papel")==0){
    if(strcmp(s,"pedra")==0)
      strcpy(a,"Raj trapaceou!");
  }
  if(strcmp(s,"pedra")==0){
    if(strcmp(r,"lagarto")==0)
      strcpy(a,"Bazinga!");
  }
  if(strcmp(r,"pedra")==0){
    if(strcmp(s,"lagarto")==0)
      strcpy(a,"Raj trapaceou!");
  }
  if(strcmp(s,"lagarto")==0){
    if(strcmp(r,"Spock")==0)
      strcpy(a,"Bazinga!");
  }
  if(strcmp(r,"lagarto")==0){
    if(strcmp(s,"Spock")==0)
      strcpy(a,"Raj trapaceou!");
  }
  if(strcmp(s,"Spock")==0){
    if(strcmp(r,"tesoura")==0)
      strcpy(a,"Bazinga!");
  }
  if(strcmp(r,"Spock")==0){
    if(strcmp(s,"tesoura")==0)
      strcpy(a,"Raj trapaceou!");
  }
  if(strcmp(s,"tesoura")==0){
    if(strcmp(r,"lagarto")==0)
      strcpy(a,"Bazinga!");
  }
  if(strcmp(r,"tesoura")==0){
    if(strcmp(s,"lagarto")==0)
      strcpy(a,"Raj trapaceou!");
  }
  if(strcmp(s,"lagarto")==0){
    if(strcmp(r,"papel")==0)
      strcpy(a,"Bazinga!");
  }
  if(strcmp(r,"lagarto")==0){
    if(strcmp(s,"papel")==0)
      strcpy(a,"Raj trapaceou!");
  }
  if(strcmp(s,"papel")==0){
    if(strcmp(r,"Spock")==0)
      strcpy(a,"Bazinga!");
  }
  if(strcmp(r,"papel")==0){
    if(strcmp(s,"Spock")==0)
      strcpy(a,"Raj trapaceou!");
  }
  if(strcmp(s,"Spock")==0){
    if(strcmp(r,"pedra")==0)
      strcpy(a,"Bazinga!");
  }
  if(strcmp(r,"Spock")==0){
    if(strcmp(s,"pedra")==0)
      strcpy(a,"Raj trapaceou!");
  }
  if(strcmp(s,"pedra")==0){
    if(strcmp(r,"tesoura")==0)
      strcpy(a,"Bazinga!");
  }
  if(strcmp(r,"pedra")==0){
    if(strcmp(s,"tesoura")==0)
      strcpy(a,"Raj trapaceou!");
  }

    printf("Caso #%d: %s\n",i,a);
  }
  return 0;
}
