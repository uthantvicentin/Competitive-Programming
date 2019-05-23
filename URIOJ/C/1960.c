#include <stdio.h>
#include <string.h>
int main(){
    char x[4];
    int lnth;
    lnth = strlen(gets(x));
    if(lnth==3){
        if(x[0]=='1')
         printf("C");
        else if(x[0]=='2')
         printf("CC");
        else if(x[0]=='3')
         printf("CCC");
        else if(x[0]=='4')
          printf("CD");
        else if(x[0]=='5')
          printf("D");
        else if(x[0]=='6')
          printf("DC");
        else if(x[0]=='7')
          printf("DCC");
        else if(x[0]=='8')
          printf("DCCC");
        else if(x[0]=='9')
          printf("CM");
        if(x[1]=='1')
          printf("X");
        else if(x[1]=='2')
          printf("XX");
        else if(x[1]=='3')
         printf("XXX");
        else if(x[1]=='4')
         printf("XL");
        else if(x[1]=='5')
         printf("L");
        else if(x[1]=='6')
         printf("LX");
        else if(x[1]=='7')
         printf("LXX");
        else if(x[1]=='8')
         printf("LXXX");
        else if(x[1]=='9')
         printf("XC");
        if(x[2]=='1')
         printf("I");
        else if(x[2]=='2')
         printf("II");
        else if(x[2]=='3')
         printf("III");
        else if(x[2]=='4')
         printf("IV");
        else if(x[2]=='5')
         printf("V");
        else if(x[2]=='6')
         printf("VI");
        else if(x[2]=='7')
         printf("VII");
        else if(x[2]=='8')
         printf("VIII");
        else if(x[2]=='9')
         printf("IX");
    }
    else if(lnth==2){
        if(x[0]=='1')
         printf("X");
        else if(x[0]=='2')
         printf("XX");
        else if(x[0]=='3')
         printf("XXX");
        else if(x[0]=='4')
         printf("XL");
        else if(x[0]=='5')
         printf("L");
        else if(x[0]=='6')
         printf("LX");
        else if(x[0]=='7')
         printf("LXX");
        else if(x[0]=='8')
         printf("LXXX");
        else if(x[0]=='9')
         printf("XC");
        if(x[1]=='1')
         printf("I");
        else if(x[1]=='2')
         printf("II");
        else if(x[1]=='3')
         printf("III");
        else if(x[1]=='4')
         printf("IV");
        else if(x[1]=='5')
         printf("V");
        else if(x[1]=='6')
         printf("VI");
        else if(x[1]=='7')
         printf("VII");
        else if(x[1]=='8')
         printf("VIII");
        else if(x[1]=='9')
         printf("IX");
    }
    else if(lnth==1){
        if(x[0]=='1')
         printf("I");
        else if(x[0]=='2')
         printf("II");
        else if(x[0]=='3')
         printf("III");
        else if(x[0]=='4')
         printf("IV");
        else if(x[0]=='5')
         printf("V");
        else if(x[0]=='6')
         printf("VI");
        else if(x[0]=='7')
         printf("VII");
        else if(x[0]=='8')
         printf("VIII");
        else if(x[0]=='9')
         printf("IX");
    }
    printf("\n");
    return 0;
}

/*
int main(){
  int n;
  scanf("%d",&n);

  while(n>0){
    if(n==1000){
      printf("M");
      n-=1000;
    }
    else if(n>=900){
      printf("CM");
      n-=900;
    }
    else if(n>=500){
      printf("D");
      n-=500;
    }
    else if(n>=100){
      printf("C");
      n-=100;
    }
    else if(n>=90){
      printf("XC");
      n-=90;
    }
    else if(n>=50){
      printf("L");

      n-=50;
    }
    else if(n==40){
      printf("XL");
      n-=40;
    }
    else if(n>=10){
      printf("X");
      n-=10;
    }
    else if(n>=9){
      printf("IX");
      n-=9;
    }
    else if(n>=5){
      printf("V");
      n-=5;
    }
    else if(n==4){
      printf("IV");
      n-=4;
    }
    else{
    printf("I");
    n-=1;
  }

  }
  printf("\n");
  return 0;
}
*/
