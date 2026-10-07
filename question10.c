#include<stdio.h>
int main (){
    int amount,total=0,count=0;
    while (true)
    {
        printf("\n enter withdrawal amount");
        scanf("%d",&amount);
        if (amount==0)
        {
            break;
        }
        else
        {
            total=total+amount;
            count++;
        }
    }
    printf("\ntotal number of transactions %d",count);
    printf("total amount %d",total);
    

}