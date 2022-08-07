// program to find out factorial of a number

#include<stdio.h>
void main()
{
int i,fact=1,num;
	printf("Enter number : ");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		fact = fact*i;
	}		
	printf("factorial : %d\n",fact);
}
