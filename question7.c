#include <stdio.h>
int main (){
    int num,ten=1,temp,x=0,count=0,reverse=0;
    printf("enter number");
    scanf("%d",&num);
    temp=num;
    while (temp!=0)
    {
        temp=temp/10;
        count=count+1;
    }
    for (int i = 0; i < count-1; i++)
    {
    ten =ten*10;
    }
    temp=num;
    for (int  i = 0; i < count; i++)
    {
        x=temp%10;
        reverse=reverse+(ten*x);
        ten=ten/10;
        temp=temp/10;
    }
    printf("%d",reverse);
    if (reverse==num)
    {
        printf("palendrom");
    }
    
    
    
    return 0;
}