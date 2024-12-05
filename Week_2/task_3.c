#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N;
   int m=1;
   printf("enter N: ");
   scanf("%d",&N);
   for(int i=0;i<N;i++){
    printf("%d %d %d PUM\n",m,m+1,m+2);
    m=m+4;
   }
    return 0;
}
