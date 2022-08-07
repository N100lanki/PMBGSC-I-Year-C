// program to find out area of circle

#include<stdio.h>
#define PI 3.14

void main()
{
	float rad,area;
	
	printf("Enter Radius  : ");
	scanf("%f",&rad);

	area = PI * rad * rad;	
	printf("Area of circle : %.2f\n",area);
	
}
