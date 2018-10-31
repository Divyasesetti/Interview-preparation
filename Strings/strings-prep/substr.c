#include<stdio.h>
void main()
{
    char str1[100],substr[100];
    int i=0,pos=0,j;
    printf("enter string");
    scanf("%s",str1);
    printf("enter substr");
    gets(substr);
    for(i=0;str1[i]!='\0';i++)
    {
        j=0;
        if(str1[i]=substr[j])
        pos=i+1;
        while(str1[i]==substr[j])
        {
            i++;
            j++;
        }
        if(substr[j]=='\0')
        {
            printf("substring is present at %d",pos);
        }
        else
        i=pos;
        pos=0;
    }
}
