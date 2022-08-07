// program

#include<stdio.h>
void main()
{
	int num,rem,rev=0;
		printf("Enter number : ");
		scanf("%d",&num);
		
		printf("Original number : %d\n",num);
		
		while(num>0)
		{
			rem = num%10;
			rev = rev*10+rem;
			num=num/10;
		}
		
		printf("Reverse Number : %d\n",rev);
}
