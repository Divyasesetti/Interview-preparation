#include<stdio.h>
void main()
{
    int n,r,sum=0,rem,rev=0,temp,product,temp1;
    printf("enter a number");
    scanf("%d",&n);
    temp1=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;

    }
    printf("sum %d\n",sum);
    temp=sum;
    while(sum>0)
    {
        rem=sum%10;
        rev=rev*10+rem;
        sum=sum/10;
    }
    printf("rev %d\n",rev);
    product=temp*rev;
    printf("product %d\n",product);
    if(temp1==product)
    {
        printf("magic number");
    }
    else{
        printf("not magic number");
    }


}
