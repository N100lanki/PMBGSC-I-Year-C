// program showing the concept of switch statement ( output : error)

#include<stdio.h>
void main()
{
	char ch = 'a';
	
	switch(ch)
	{					
		case 'a' : printf("Character\n");
								break;
		case 97 : printf("ASCII value\n");
								break;
		default : printf("Invalid selection\n");
						  break;
	}
}

