#include<stdio.h>
int sum=0;
int arms(int);
void main()
{
  int n;
  printf("enter no");
  scanf("%d",&n);
  int armstrong=arms(n);
  if(armstrong==1)
  printf("arsmtsrong");
  else
  printf("not armstrong");
}
int arms(int n)
{
    int r;
    if(n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        arms(n/10);
    }
    if(sum==n)
    {
        return 1;
    }

}
