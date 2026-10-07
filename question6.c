#include<stdio.h>
int main (){
    int num1=1;
    int num2=1;
    int temp=0;
    int array[10];
    printf("\n%d",num1);
    printf("\n%d",num1);
    for (int i = 0; i < 10; i++)
    {
        temp=num2;
        num2=num2+num1;
        num1=temp;
        
        printf("\n%d",num2);
    }
    


    return 0;
}