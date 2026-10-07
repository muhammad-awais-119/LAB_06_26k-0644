#include<stdio.h>
int main (){
    int transfers[10]={5000,50,12000,500000,20,8000,25000,300,450000,15000},count=0,total=0,highest=0,x=0;
    float avg=0;
    for (int i = 0; i < 10; i++)
    {
        if (transfers[i]<100)
        {
            printf("\nflagged");
            count++;
        }
        else if (transfers[i]>200000)
        {
            printf("\nsuspicious");
            count++;
        }
        else if (transfers[i]>=100 && transfers[i]<=200000)
        {
            total=total+transfers[i];
            x++;
            if (transfers[i]>highest)
            {
                highest=transfers[i];
            }
        }    
    }
    printf("\nflagged %d",count);
    printf("\nhighest %d",highest);
    avg=total/x;
    printf("\naverage %f",avg);

    


}