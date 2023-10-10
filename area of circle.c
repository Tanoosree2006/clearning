#include <stdio.h>
int main()
{
	float radius ,area,circumference;
	printf("enter the radius value of the circle");
	scanf("%f",&radius);
	//calculate the area of the circle 
	area = 3.14*radius*radius;
	//calculate the circumference of a circle 
	circumference=3.14*radius*2;
	//display the area of the circle 
	//display the circumference of the circle
	printf("the area of the circle is %2f\n",area);
	printf("the circumference of the circle is %2f\n",circumference);
	return 0;
}