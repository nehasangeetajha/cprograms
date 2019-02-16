#include <stdio.h>
int main()
{
    char arr[50];
    int a=0,b=0,c=0,d=0,i=0;
    printf("Enter elements of array:");
    gets(arr);
    while (arr[i]!='\0')
    {
        if(arr[i]>='0'&& arr[i]<='9')
            a++;
        else if(arr[i]==' ')
            b++;
        else if(arr[i]=='a'||arr[i]=='A'||arr[i]=='e'||arr[i]=='E'||arr[i]=='i'||arr[i]=='I'||arr[i]=='o'||arr[i]=='O'||arr[i]=='u'||arr[i]=='U')
            c++;
        else if((arr[i]>='a'&&arr[i]<='z')||(arr[i]>='A'&&arr[i]<='Z'))
            d++;
            i++;
    }
    printf("No. of digits:%d\n",a);
    printf("No. of spaces:%d\n",b);
    printf("No. of vowels:%d\n",c);
    printf("No. of consonants:%d\n",d);
    getch();
    return 0;
    }
