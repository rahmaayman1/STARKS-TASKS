#include <stdio.h>
#include <stdlib.h>

int main()
{
   int id=2020,pass=1234,id_test,pass_test,t=3;
   printf("enter your id: ");
   scanf("%d",&id_test);
   if(id_test==id){
        while(t){
     printf("enter your password: ");
     scanf("%d",&pass_test);
     if(pass_test==pass){
        printf("Welcome!\n");
        break;
     }
     else{
        printf("incorrect password..\n");
        t--;
     }

     }
   }
   else{
    printf("you are not registered!..");
   }
    return 0;
}
