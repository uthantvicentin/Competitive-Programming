#include <stdio.h>

int main(){
  float n1,n2,n3,n4,n5,media,mediafinal;
  scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
  media=(n1*2+n2*3+n3*4+n4*1)/10;
  if(media>=7){
     printf("Media: %.1f\n",media);
     printf("Aluno aprovado.\n");
  }
  else if(media<5){
    printf("Media: %.1f\n",media);
    printf("Aluno reprovado.\n");

  }
  else{
    printf("Media: %.1f\n",media);
    printf("Aluno em exame.\n");
    scanf("%f",&n5);
    printf("Nota do exame: %.1f\n",n5);
    mediafinal=(media+n5)/2;
    if(mediafinal>=5){
      printf("Aluno aprovado.\n");
      printf("Media final: %.1f\n",mediafinal);
    }
      else{
        printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n",mediafinal);
      }
  }
  return 0;
}
