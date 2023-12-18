#include<stdio.h>
void display(int i)
{
	if(i>=10)return;
	display(i+1);
	printf("%d\n",i);
}
int main()
{
	display(0);
}