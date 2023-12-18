               //reccursion
#include<stdio.h>
void display (int i)
{        //function defintion 
	if(i>=10)return;   //base case
	printf("good morning\n");
	display(i+1);  //reccursive call
}
int main()
{
	display(0);     //function call
}