#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,years;
    printf("enter Limak and pop weight: ");
    scanf("%d%d",&a,&b);
    while(a<=b){
      a*=3;
      b*=2;
      years++;
    }
    printf("%d",years);
    return 0;
}

