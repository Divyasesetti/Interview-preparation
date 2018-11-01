#include<stdio.h>
int main(void)
{
    char str[10];
    int i,length=0;
    printf("enter astring");
    scanf("%s",str);
    for(i=0;str[i]!='\0';++i)
    {
        length=length+1;
    }
    printf("length of string %d",length);
}
