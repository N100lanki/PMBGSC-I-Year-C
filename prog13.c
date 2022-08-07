// program showing the concept of nested if else statement

#include<stdio.h>
void main()
{
			char ch;
			int age;
				printf("Enter nationality(i/I) for Indian : \n");
				scanf("%c",&ch);
				
				if(ch=='i' || ch=='I')
				{
						printf("Enter age : ");
						scanf("%d",&age);
						
							if(age>=18)
							{
								printf("Eligible to vote\n");
							}
							else
							{
								printf("Not eligible to vote\n");
							}
				}
				else
					printf("Not an Indian\n");
}
