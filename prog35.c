// program

#include<stdio.h>
void main()
{
	int num,count=0;
		printf("Enter number : ");
		scanf("%d",&num);
		
		while(num>0)
		{
			num=num/10;
			count++;
		}
		
		printf("Number of digits : %d\n",count);
		printf("Number : %d\n",num);
}
