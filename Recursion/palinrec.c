#include<stdio.h>
int pal(int);
static int rev=0;
void main()
{
    int n;
    printf("enter no");
    scanf("%d",&n);
    int palindrome = pal(n);
    if(palindrome==1)
    printf("palindrome");
    else
    printf("not palindrome");
}
int pal(int n)
{
    if(n!=0)
    {
        rev=rev*10+n%10;
        pal(n/10);
    }
    if(rev==n)
    return 1;
}
