#include <stdio.h>
int main (){
    int marks[15],countHUN_after=0,countHUN_before=0,total=0,highest=0,lowest=999;
    float avg=0;
    for (int i = 0; i < 15; i++)
    {
        printf("enter marks\n");
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 2; i++)
    {
       if (marks[i]==100)
       {
        marks[i]=100;
        countHUN_before++;
       }
       else if (marks[i]+5>100)
       {
        marks[i]=100;
        countHUN_after++;
       }
       else
       {
        marks[i]+=5;
       }
       
       total=total+marks[i];
       if (marks[i]>highest){highest=marks[i];}
       if (marks[i]<lowest){lowest=marks[i];}
    }
    avg=total/15;
    printf("\nstudents who had 100 before bonus %d",countHUN_before);
    printf("\nstudents who had 100 after bonus %d",countHUN_after);
    printf("\nrange %d",highest-lowest);
    printf("\naverage marks %f",avg);
    


    return 0;
}