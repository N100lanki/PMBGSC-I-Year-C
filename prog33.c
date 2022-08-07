// program to print fibonacci series

#include<stdio.h>
void main()
{
	int i,a=-1,b=1,c=0,num;
		printf("enter number of terms : ");
		scanf("%d",&num);
		
		for(i=1;i<=num;i++)
		{
			c = a+b;
			printf("%d\t",c);
				a=b;
				b=c;
		}
		printf("\n");
}
