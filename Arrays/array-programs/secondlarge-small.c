#include<stdio.h>
void main()
{
int i,j,n,k,a[10];
printf("enter size of array");
scanf("%d",&n);
printf("enter elements into an array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
k=a[i];
a[i]=a[j];
a[j]=k;
}
}
}
printf("sorted elements in descending order");
for(i=0;i<n;i++)
printf("\n%d",a[i]);
printf("second largest \n%d",a[1]);
printf("second smallest \n%d",a[n-2]);
}
