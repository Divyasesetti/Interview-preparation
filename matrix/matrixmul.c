#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],n,m,i,j,k,c[10][10];
    printf("enter no of rows and columns");
    scanf("%d %d",&n,&m);
    printf("enter elements into matrix1");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d\n",&a[i][j]);
        }
    }
    printf(" matrix1\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("enter elements into matrix2");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d\n",&b[i][j]);
        }
    }
    printf(" matrix2\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("matrix multiplication\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
              c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
        printf("%d\t",c[i][j]);   
        }
        printf("\n");
    }
}
