// program showing the concept of switch statement

#include<stdio.h>
#include<stdlib.h>

void main()
{
		int a,b,code;
		
			printf("Enter values of a and b : ");
			scanf("%d%d",&a,&b);
			
			printf("\n   Select Code   \n");
			printf("-------------------\n");
			printf("1 for add \n");
			printf("2 for sub \n");
			printf("3 for exit \n");
			
			printf("Select Code : ");
			scanf("%d",&code);
	
			switch(code)
			{
				case 1 : printf("Sum : %d\n",a+b);
									break;
				case 2 : printf("Sub : %d\n",a-b);
									break;
				case 3 : exit(0);
				
				default : printf("Invalid selection\n");
									break;
			}
}

