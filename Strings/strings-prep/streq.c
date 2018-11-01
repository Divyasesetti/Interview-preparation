#include<stdio.h>
void main()
{
    char str1[100],str2[100];
    int count=0,count1=0,flag=0,i=0,j=0;
    printf("enter first string");
    gets(str1);
    printf("enter second string");
    gets(str2);
    while(str1[count]!='\0')
    count++;
    while(str2[count1]!='\0')
    count1++;
    i=0;j=0;
    while((i<count)&&(j<count1))
    {
        if(str1[i]==str2[j])
        {
            i++;
            j++;
            continue;
        }
        if(str1[i]<str2[j])
        {
            flag=-1;
            break;
        }
        if(str1[i]>str2[j])
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    printf("Both strings are equal\n");
    if (flag==-1)
    printf("String1 is less than string2\n", str1, str2);
    if (flag==1)
    printf("String1 is greater than string2\n", str1, str2);
    getch();
}

