#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter any character: ");
    scanf("%c",&ch);
    printf("your character: %c\n the ascii code is: %d\n",ch,ch);
    printf("the previous char: %c\n the next char: %c\n",ch-1,ch+1);

    return 0;
}
