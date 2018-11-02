#include<stdio.h>
void main()
{
    int a[10][10],i,j,m,n,trace=0;
    printf("enter no of rows and columns");
    scanf("%d %d",&m,&n);
    printf("enter elements in to matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("trace of matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
            trace=trace+a[i][j];
            }
        }
    }
    printf("%d",trace);
}
