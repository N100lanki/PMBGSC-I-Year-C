// program to check whether entered number is perfect or not

#include<stdio.h>
void main()
{
int i,num,sum=0;

	printf("Enter number : ");
	scanf("%d",&num);

	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			sum = sum + i;
		}
	}		
	if(sum==num)
		printf("Number is perfect number\n");	
	else
		printf("Number is not perfect\n");
}
