#include <stdio.h>
int lcm(int n1,int n2);
int main()
{
    int n1, n2,res=1;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    res=lcm(n1,n2);
    printf("%d",res);
    return 0;
}
int lcm(int n1,int n2)
{
    int lcm=1,temp;
    temp = (n1>n2) ? n1 : n2;
    for(int i=temp; i < (n1*n2); ++i)
    {
        if(i%n1==0 && i%n2==0)
            lcm = i;
            break;
    }
    return lcm;
}
