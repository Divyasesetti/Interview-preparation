#include<stdio.h>
void main()
{
int i,j,n,a[10];
printf("enter the size of an array");
scanf("%d",&n);
printf("enter elements into an array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("duplicated element ");
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
printf("%d",a[i]); 
}
}
}
