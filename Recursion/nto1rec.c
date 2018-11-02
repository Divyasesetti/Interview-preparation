#include<stdio.h>
int num(int);
void main()
{
    int n;
    printf("enter no");
    scanf("%d",&n);
    num(n);
    
}
int num(int n)
{
    if(n>=1)
    {
        printf("%d\n",n);
        return num(n-1);
    }
}
