// program showing the concept of switch statement

#include<stdio.h>
#include<stdlib.h>

void main()
{
		int l,b;
		float r;
		char code;
		
		printf("\nselect code\n");
		printf("R for area of rectangle\n");
		printf("C for area of circle\n");
			
			printf("Select code : ");
			scanf("%c",&code);
			
			switch(code)
			{
				case 'r' : 
				case 'R' : printf("Enter l and b : ");
									 scanf("%d%d",&l,&b);
									 printf("Area of rectangle : %d\n",l*b);
									 break;
									 
				case 'c' : 
				case 'C' : printf("Enter radius : ");
									 scanf("%f",&r);
									 printf("Area of circle : %.2f\n",3.14*r*r);
									 break;
			
				default : printf("Invalid selection\n");
										break;
			}
}

