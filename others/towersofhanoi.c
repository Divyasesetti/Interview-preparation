#include<stdio.h>
void toh(int ,char, char,char);
void main()
{
    int n;
    printf("enter no of disks");
    scanf("%d",&n);
    toh(n,'A','B','C');
}
void toh(int n,char frompeg,char topeg,char auxpeg)
{
    if(n==1)
    {
        printf("\nmove disk  %d from %c peg1 to%c peg2",n,frompeg,topeg);
        return;
    }
    toh(n-1,frompeg,auxpeg,topeg);
    printf("\n move disk %d from %c peg to %c peg ",n,frompeg,topeg);
    toh(n-1,auxpeg,topeg,frompeg);
}
