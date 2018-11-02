#include<stdio.h>
int lcm(int,int);
void main()
{
    int n1,n2,value;
    printf("enter 2 numbers");
    scanf("%d %d",&n1,&n2);
    int result=lcm(n1,n2);
    printf("lcm %d",result);
}
int lcm(int n1,int n2)
{
    static int value=1;
    if( value%n1==0 && value%n2==0 ){
    return value;
    }
    value++;
    lcm(n1,n2);
    return value;
}
