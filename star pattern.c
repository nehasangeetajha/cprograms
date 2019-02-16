#include<stdio.h>
int main()
{
    int rows,columns,i,j;
    printf("enter no. of rows:");
    scanf("%d",&rows);
    for (i=1;i<=rows;i++)
    {
        for (j=i;j<=rows;j++)
        {
            printf(" ");
        }
        for (j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }

        printf("\n");
    }
    getch();
    return 0;
}
