#include<stdio.h>
int main()
{
    int i,j,n;
    char c;
    c=65;
    n=5;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("%c",c);
            c++;
            printf("\n");
    }
    getch();
    return 0;
}
