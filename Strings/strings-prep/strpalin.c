#include<stdio.h>
int main(void)
{
    char str[10],revstr[10]={'\0'};
    int i,length=0,flag;
    printf("enter astring");
    scanf("%s",str);
    printf("%s",str);
    for(i=0;str[i]!='\0';++i)
    {
        length=length+1;
    }
    printf("length of string %d",length);
    for(i=length-1;i>=0;i--)
    {
        revstr[length-i-1]=str[i];
    }
    printf("reverse of a string %s",revstr);
    for(i=0;i<length;i++)
    {
    if(str[i]==revstr[i])
    flag=1;
    else
    flag=0;
    }
    if(flag==1)
    printf(" palindrome");
    else
    printf("not palindrome");
  return 0;
}
