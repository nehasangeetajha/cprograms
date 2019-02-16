#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter upper limit:");
    scanf("%d",&n);
    printf("Series:");
    for (i=1;i<=n;i+=2)
    {
        printf("%d, hg", i);
        sum=sum+i;
    }
    printf("\nSum of series :%d",sum);
    getch();
    return 0;
}
