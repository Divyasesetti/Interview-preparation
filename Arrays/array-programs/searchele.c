#include<stdio.h>
void main()
{
int i,n,k,a[10],low,high,mid;
printf("enter size of array");
scanf("%d",&n);
printf("enter elements into an array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the element to search");
scanf("%d",&k);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(k==a[mid])
{
printf("search element at mid position",mid);
}
if(k<a[mid])
high=mid-1;
else
low=mid+1;
printf("seacrh succesfull");
}
}
