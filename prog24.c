// program showing the concept of switch statement

#include<stdio.h>
#include<stdlib.h>

void main()
{
		int a,b;
		char code;
		
			printf("Enter values of a and b : ");
			scanf("%d%d",&a,&b);

			getchar();
						
			printf("\n   Select Code   \n");
			printf("-------------------\n");
			printf("+ for add \n");
			printf("- for sub \n");
			printf("e for exit \n");
			
			printf("Select Code : ");
			scanf("%c",&code);
	
			switch(code)
			{
				case '+' : printf("Sum : %d\n",a+b);
									break;
				case '-' : printf("Sub : %d\n",a-b);
									break;
				case 'e' : exit(0);
				
				case 10 : printf("Gets entry on enter\n");
										break;
	
				default : printf("Invalid selection\n");
									break;
			}
}

