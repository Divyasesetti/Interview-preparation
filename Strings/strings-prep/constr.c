#include<stdio.h>
void main()
{
        char str1[100],str2[100];
        int i,j,length,k;
        printf("enter string1");
        scanf("%s",str1);
        printf("enter 2 string");
        scanf("%s",str2);
        for(i=0;str1[i]!='\0';i++)
        {
            ;
        }
        k=i;
        for(j=0;str2[j]!='\0';i++)
        {
            str1[i]=str2[j++];
        }
        str1[i]='\0';
        printf("%s",str1);
        
    }
