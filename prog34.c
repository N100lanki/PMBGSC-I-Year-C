// program

#include<stdio.h>
void main()
{
	int num,last,middle,first;
		printf("Enter three digit number : ");
		scanf("%d",&num);
		
		printf("\nOriginal number : %d\n",num);
		
		if(num>99 && num<1000)
		{
			last = num%10;
			first = num/100;
			middle = (num/10)%10;
			
			printf("Reverse Number : %d\n",last*100+middle*10+first*1);
		}
		else
			printf("Number is not a three digit number\n");
}
