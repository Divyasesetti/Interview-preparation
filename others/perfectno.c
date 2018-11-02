#include<stdio.h>
void main()
{
    int n,i,r,sum=0,temp;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    for(i=1;i<n-1;i++)
    {
        r=n%i;
        if(r==0)
        {
            sum=sum+i;
        }
    }
    if(sum==temp)
    {
        printf("perfect no");
    }
    else{
        printf("not perfect no");
    }
}
