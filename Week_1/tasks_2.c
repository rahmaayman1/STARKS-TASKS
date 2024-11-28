#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,temp;
    printf("enter two float nums: ");
    scanf("%f%f",&a,&b);
    printf("numbers before swapping: a=%f  b=%f \n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("numbers after swapping: a=%f  b=%f \n",a,b);
    return 0;
}
