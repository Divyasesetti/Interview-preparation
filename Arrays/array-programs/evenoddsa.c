#include<stdio.h>
void main()
{
int a[5],e[10],o[10],i,j=0,k=0;
printf("enter elements");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
for(i=0;i<5;i++)
{
if(a[i]%2==0)
{
e[j]=a[i];
j++;
}
else
{
o[k]=a[i];
k++;
}
}
printf("even elements");
for(i=0;i<j;i++)
{
printf("\n%d",e[i]);
}
printf("odd elements");
for(i=0;i<k;i++)
{
printf("\n%d",o[i]);
}
}
