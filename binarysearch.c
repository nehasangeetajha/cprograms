#include<stdio.h>
int main()
{
    int size,first,last,middle,search,i,j,arr[100];
    printf("Enter no. of elements:");
    scanf("%d",&size);
    printf("Enter %d integers:",size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Enter value to find:");
    scanf("%d",&search);
    first=0;
    last=size-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        if(arr[middle]<search)
            first=middle+1;
        else if(arr[middle]==search)
        {
            printf("%d found at %d position",search,middle+1);
            break;
        }
        else
            last=middle-1;
        middle=(first+last)/2;
    }
    getch();
    return 0;
}
