#include<stdio.h>
int count(num){
if (num ==0)return 0;
return 1+count(num/10);
}
int main()
{
int ans = count(123456);
printf("%d",ans);
}