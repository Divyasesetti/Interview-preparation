#include<stdio.h>
void main()
{
    int i,j;
    for(i=7;i>=1;i--)
    {
        for(j=i;j<=7;j+=3)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}
