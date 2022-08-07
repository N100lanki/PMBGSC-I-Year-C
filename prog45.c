// program to check whether entered number is prime or not 

#include<stdio.h>

void main()
{
	int i,num;
		printf("Enter number : ");
		scanf("%d",&num);
		
		for(i=2;i<=num/2;i++)
		{
			if(num%i==0)
				break;
		}
		if(i>num/2 && num>1)
			printf("Number is prime number \n");
		else
			printf("Number is not a prime number\n");
} 
