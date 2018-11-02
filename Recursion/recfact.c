#include<stdio.h>
int fact(int);
void main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int result=fact(n);
    printf("factorial of a number %d is %d",n,result);
}
int fact(int n){
    if(n==0 || n==1){
       return 1;
    }
    else{
        return n*fact(n-1);
    }
}
