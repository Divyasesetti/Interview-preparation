#include<stdio.h>
void main()
{
    int i,j,k=1;
    for(i=1;i<=4;i++)
    {
        for(j=4;j>=1;j--)
        {
            printf("%d\t",k);
            k++;
        }
        printf("\n");
    }
}
