#include <stdio.h>

int somma(int, int);

int main(){

  int a,b,s;

  a=7;
  b=43;
  s=somma(a,b);

  printf("%d\n",s);

  return 0;
}

int somma(int a,int b){

  if(b==0) return a;

  return 1+somma(a,b-1); 
}
