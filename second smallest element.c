#include<stdio.h>
#include<conio.h>

void main()
{
    int a[50];
    int n,i,small,s_small;

    printf("\n Enter number of elements: ");
    scanf("%d",&n);

    printf("\n Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    small=s_small=a[0];

    for(i=1;i<n;i++)
    {
        if(small>a[i])
        {
            s_small=small;
            small=a[i];
        }
        else if(s_small>a[i] && a[i]!=small)
        {
            s_small=a[i];
        }
    }

    printf("\n The Second Smallest Element in the given Array: %d", s_small);
    getch();
}
