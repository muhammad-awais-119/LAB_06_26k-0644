#include <stdio.h>
int main (){
    int notes500[5]={10,5,8,12,6},total=0,withdraw=0;
    int notes200[5]={20,15,10,8,14};
    int notes100[5]={30,25,40,35,20};
    for (int i = 0; i < 5; i++)
    {
        total=total+(notes100[i]*100)+(notes200[i]*200)+(notes500[i]*500);
    }
    printf("%d",total);
    printf("enter the MOUNT TO withdraw \n");
    scanf("%d",&withdraw);
    if (withdraw>total)
    {
        printf("insufficient funds");
    }
    else if (withdraw%100!=0)
    {
        printf("\namount is not a multiple of hundred");
    }
    else
    {
        printf("transaction approved");
    }
    
    
    
    

    



    return 0;
}