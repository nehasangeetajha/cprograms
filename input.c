#include<stdio.h>
#include<conio.h>
#include<string.h>

 void main()
  {
  int i,a[50],no,pos,n;
  printf("Enter number of elements:");
  scanf("%d",&n);
  printf("Enter data in array: ");
  for(i=0;i<n;i++)
  {
  scanf("%c",&a[i]);
  }
  printf("\n\nEnter position number: ");
  scanf("%d",&pos);
  printf("\n\nEnter new element = ");
  scanf("%c",&no);
  --pos;
  for(i=n;i>=pos;i--)
  {
  a[i+1]=a[i];
  }
  a[pos]=no;
  printf("\n\nNew data in array: ");
  for(i=0;i<n+1;i++)
  {
  printf("  %c",a[i]);
  }
  }

