// program to swap two numbers without using third variable

#include<stdio.h>

void main()
{
	int a,b;
		printf("Enter two numbers : ");
		scanf("%d%d",&a,&b);
		
		printf("Before Swapping : \na : %d\nb : %d\n",a,b);
	
			a = a+b;
			b = a-b;
			a = a-b;
					
		printf("After Swapping : \na : %d\nb : %d\n",a,b);

}
