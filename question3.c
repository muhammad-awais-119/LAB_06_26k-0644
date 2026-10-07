#include<stdio.h>
int main (){
    int stock[10],minimum[10],largest=0,total=0,gap=0,index=0;
    for (int i = 0; i < 10; i++)
    {
        scanf("\n%d",&stock[i]);
        scanf("\n%d",&minimum[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (stock[i]<minimum[i])
        {
            gap=minimum[i]-stock[i];
            total=total+gap;
            if (gap>largest){largest=gap,index=i;}  
        }
        printf("\nindex %d gap %d",i,gap);
    }
    printf("\nindex of larges reorder %d number of item %d",index,largest);
    printf("\ntotal reorders %d",total);
    return 0;
}