#include <stdio.h>
int main (){
   int seats[15];
   for (int i = 0; i < 15; i++)
   {
    scanf("%d",&seats[i]);
   }
   for (int i = 0; i < 15; i++)
   {
    if (seats[i]==0)
    {
        printf("first seat in a row available at seat number %d",i+1);
        break;
    }
   }

   for (int i = 14; i >= 0; i=i-1)
   {
    if (seats[i]==0)
    {
        printf("first last seat in a row available at seat number %d",i+1);
        break;
    }
   }
   
   

}