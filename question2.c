#include<string.h>
#include<stdio.h>
int main (){
    char pass[25];
    int strength=0,x=0,strongest=0,lowest=9999,count=0;
    for (int  i = 0; i <5; i++)
    {
       strength=0;
       printf("\nenter password");
       scanf("%s",&pass);
       x=strlen(pass);
       for (int j = 0; j < x; j++)
       {
        if (pass[j]>='a' && pass[j]<='z'){strength++;}
        else if (pass[j]>='A' && pass[j]<='Z'){strength+=2;}
        else if (pass[j]=='1' && pass[j+1]=='2' && pass[j+2]=='3'){strength-=3;}
        else if (pass[j]>='0' && pass[j]<='9'){strength+=3;}
       }
       if (x>=8){strength+=5;}
       printf("\npassword: %s score %d",pass,strength);
       if (strength>strongest){strongest=strength;}
       if (strength<lowest){lowest=strength;}
       if (strength<10){count++;}
    }
    printf("\nstrongest %d",strongest);
    printf("\nlowest %d",lowest);
    printf("\n%d",count);
    return 0;
}