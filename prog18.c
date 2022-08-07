// program showing the concept of switch statement

#include<stdio.h>
void main()
{
	int n = 1;
	switch(n)
	{
		case 1 : printf("case 1 selected\n");
							break;		
		case 2 : printf("case 2 selected\n");
							break;
		default : printf("Invald selection\n");
						  break;
	}
}
