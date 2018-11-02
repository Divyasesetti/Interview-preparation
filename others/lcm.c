#include<stdio.h>
void main()
{
    int n1,n2,value;
    printf("enter 2 numbers");
    scanf("%d %d",&n1,&n2);
    value=(n1>n2)? n1:n2;
    while(1)
    {
        if((value%n1==0)&&(value%n2==0))
        {
        printf("lcm %d",value);
        break;
        }
        ++value;
    }
    
}
