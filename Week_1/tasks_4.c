#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b;
    printf("enter two numbers: ");
    scanf("%lf%lf",&a,&b);
    double sum=a+b;
    double diff=a-b;
    double mul=a*b;
    if(b!=0){
        double div=a/b;
        printf("division: %lf\n",div);
    }
    else{
        printf("cant devide by zero!\n");
    }
    printf("sum= %lf\n",sum);
    printf("difference= %lf\n",diff);
    printf("mul= %lf\n",mul);

    return 0;
}
