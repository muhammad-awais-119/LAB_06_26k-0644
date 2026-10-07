#include <stdio.h>
int main(){
    int signal[12],sum,count,highest,lowest;
    float avg;
    highest=0;
    lowest=9999;
    avg=0;
    sum=0;
    for (int i = 0; i < 12; i++)
    {
        printf("ENTER NUMBER OF CAR WAITING IN SIGNAL %d: ",i+1);
        scanf("%d",&signal[i]);
        sum=sum+signal[i];
    }
    avg=sum/12;
    for (int i = 0; i < 12; i++)
    {
        if (signal[i]>avg)
        {
            count=count+1;
        }
        if (signal[i]>highest)
        {
            highest=signal[i];
        }
        if (signal[i]<lowest)
        {
            lowest=signal[i];
        }
    }
    printf("%d",highest);
    printf("%d",lowest);
    printf("\n%d",highest-lowest);
    return 0;
}