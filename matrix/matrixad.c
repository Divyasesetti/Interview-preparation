#include<stdio.h>
void main(){
    int a[10][10],m,n,i,j,b[10][10],sum[10][10];
    printf("enter rows size");
    scanf("%d",&n);
    printf("enter columns size");
    scanf("%d",&m);
    printf("enter elements into matrix");
    for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    printf("enter elements into second matrix");
    for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
           
    printf("sum of matrix\n");
    for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                sum[i][j]=a[i][j]+b[i][j];
                printf("\t%d",sum[i][j]);
            }
            printf("\n");
        }
        
}
