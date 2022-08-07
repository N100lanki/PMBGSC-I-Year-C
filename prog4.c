// program to swap two numbers using third variable

#include<stdio.h>

void main()
{
	int a,b,temp;
		printf("Enter two numbers : ");
		scanf("%d%d",&a,&b);
		
		printf("Before Swapping : \na : %d\nb : %d\n",a,b);
	
			temp = a;
			a = b;
			b = temp;
		
		printf("After Swapping : \na : %d\nb : %d\n",a,b);

}
