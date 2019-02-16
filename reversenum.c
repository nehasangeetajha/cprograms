#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter any number:");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    d=10*b+c;
    if (d==a)
        printf("This number is a palindrome.\n");
    else
        printf("This number is not a palindrome.\n");
    getch();
    return 0;
}
