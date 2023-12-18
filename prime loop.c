#include<stdio.h>
	int main()
{		
	int num;
	scanf("%d",&num);
	int fac_cou =0;
	for(int i=1;i<=num;i++)	
		if(num%i==0)
		{
			fac_cou++;
		}
		if(fac_cou ==2)
		{
			printf("prime");
		}
		else 
		{
			printf("not a prime");
		}
	
}
