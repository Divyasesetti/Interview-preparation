#include<stdio.h>
int sum(int);
void main()
{
    int n;
    printf("enter no");
    scanf("%d",&n);
    int result=sum(n);
    printf("sum of digits %d",result);
}
int sum(int n)
{
    while(n>0)
    {
        return (n%10+sum(n/10));
    }
}
