#include<stdio.h>
int pno(int,int);
void main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int check=pno(n,n/2);
    if(check==1)
    {
        printf("prime %d",n);
    }
    else{
        printf("not prime");
    }
}
int pno(int n, int i)
{
    if(i==1)
    {
     return 1;
    }
    else{
        if(n%i==0)
        {
            return 0;
        }
        else{
            return pno(n,i-1);
        }
    }
}
