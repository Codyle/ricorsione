#include <stdio.h>

int Inverti(int);

int main(){

  int a;

  scanf("%d",&a);

  printf("%d",Inverti(a));
  return 0;
}

int Inverti(int a){
 
  if(a<10) return a*10;

  return 1+Inverti(a-10);
}
