#include <stdio.h>

int somma(int, int);

int main(){

  int a,b,s;

  a=7;
  b=5;
  s=somma(a,b);

  printf("%d",s);

  return 0;
}

int somma(int a,int b){

  if(a==1) return 1;

  return 1+somma(a-1,b); 
}
