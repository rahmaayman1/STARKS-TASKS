#include <stdio.h>
#include <stdlib.h>

int main()
{
  int A,B,C,V;
  printf("enter V,A,B,C");
  scanf("%d%d%d%d",&V,&A,&B,&C);
  V-=A;
  if(V<0){
    printf("F");
    return 0;
  }
  V-=B;
  if(V<0){
    printf("M");
    return 0;
  }
  V-=C;
  if(V<C){
    printf("T");
    return 0;
  }
  return 0;
}
