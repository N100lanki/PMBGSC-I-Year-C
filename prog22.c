// program showing the concept of switch statement

#include<stdio.h>
void main()
{
	int i=1,num;
	
		printf("enter value of num : ");
		scanf("%d",&num);
		        
			switch(--i)
			{
				case 1 : num++; 
				case 2 : num++; 
				case 3 : num++; 
				case 4 : --num; 
				default : printf("Value of num : %d\n",num++);
			}
}

