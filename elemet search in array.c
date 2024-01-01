#include<stdio.h>
int main()
{
int n,a;
scanf("%d",&n);
int arr[n],flag=0;
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
scanf("%d",&a);
for(int i=0;i<n;i++)
{
    if(a==arr[i])
    {
        flag= 1;
        break;
    }
}
if(flag==1)
printf("True");
else
printf("False");
}