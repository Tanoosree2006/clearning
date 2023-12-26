#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i-1;j>0;j--)
        {
            printf(" ");
        }
        for(k=1;k<=n-i+1;k++)
        {
            printf("%d ",i);
        }
        printf("\n");
}
}
