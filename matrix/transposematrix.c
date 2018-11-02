#include<stdio.h>
void main()
{
    int a[10][10],m,n,i,j;
    printf("enter no of rows and columns");
    scanf("%d %d",&m,&n);
    printf("enter lements in to matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("transpose matrix\n");
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
        printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
