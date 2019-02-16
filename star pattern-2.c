#include<stdio.h>
int main()
{
    int a,i,j;
    a=6;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
    for(i=1;i<=6;i++)
    {
        for(j=i;j<=6;j++)
        printf("*");
        printf("\n");
    }
    getch();
    return 0;
}

