#include<stdio.h>
#include<string.h>
void main(){
    char str[100],substr[100][100];
    int  i=0,j=0,k=0;
    printf("enter a string");
    scanf("%s",str);
    while(str[k]!='\0')
    {
        j=0;
        while(str[k]!='\0'&& str[k]!=' ')
        {
            substr[i][j]=str[k];
            j++;
            k++;
        }
        substr[i][j]='\0';
        i++;
        if(str[k]!='\0')
        k++;
    }
    int substrs = i;
    for(i=0;i<substrs;i++)
    {
        for(j=i+1;j<substrs;)
        {
            if(strcmp(substr[i],substr[j])==0)
{
                for(k=j;k<substrs;k++)
                {
                    strcpy(substr[k],substr[k+1]);
                }
                substrs--;
            }
            else
            {
                j++;
            }
        }
    }
    for(i=0;i<substrs;i++)
    {
        printf("%s",substr[i]);
    }
}
