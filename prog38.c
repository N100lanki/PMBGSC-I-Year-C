// program to check whether enetered number is palindrome or not

#include<stdio.h>
void main()
{
	int num,rem,temp,rev=0;
		printf("Enter number : ");
		scanf("%d",&num);
		temp=num;
		
		while(num>0)
		{
			rem = num%10;
			rev = rev*10+rem;
			num=num/10;
		}
		
		if(rev==temp)
			printf("Number is palindrome\n");
		else
			printf("Number is not palindrome\n");
}
