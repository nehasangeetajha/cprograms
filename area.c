#include<stdio.h>
int main()
{
    float a,b,c,s,area;
    printf("enter the value of three sides:");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle : %f",area);
    getch();
    return 0;
}
