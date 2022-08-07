// program showing the concept of switch statement

#include<stdio.h>
void main()
{
	int num;
	
	printf("enter number : ");
	scanf("%d",&num);
	
	switch(num%2)
	{
		case 0 : printf("Even Number\n");
							break;
									
		case -1 : 		
		case 1 : printf("Odd Number\n");
							break;
							
		default : printf("Invald selection\n");
						  break;
	}
}

	/*
			6%2 = 0
	    5%2 = 1
	    -46%2 = -(46%2) = -0 = 0
	    -45%2 = -(45%2) = -1
	*/
