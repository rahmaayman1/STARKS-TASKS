#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    float h; char c;
    printf("enter your age and your height and any character: ");
    scanf("%d%f %c",&age,&h,&c);
    printf("your age: %d\n your height: %f\n the char: %c\n",age,h,c);
    return 0;
}