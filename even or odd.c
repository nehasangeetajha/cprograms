#include<stdio.h>
int main()
{
    int a;
    printf("Enter any integer:");
    scanf("%d",&a);
    if(a%2 == 0)
        printf("%d is even",a);
    else
        printf("%d is odd",a);
    getch();
    return 0;
}
