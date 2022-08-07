// program to find out compound interest

#include<stdio.h>
#include<math.h>

void main()
{
	int p,t;
	float r,amt,ci;
		
		printf("Enter p,r and t : ");
		scanf("%d%f%d",&p,&r,&t);
		
		amt = p*pow(1+r/100,t);
		printf("Amount : %.2f\n",amt);
		
		ci = amt - p;
		printf("Compound Interest : %.2f\n",ci);
		
}
