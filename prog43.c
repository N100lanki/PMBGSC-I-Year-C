// program showing the concept of exit(0) statement

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i,j;
		for(i=1;i<=3;i++)
		{
			printf("i : %d\n",i);
			
			for(j=1;j<=3;j++)
			{
				if(i==2 && j==2)
					exit(0);
				printf("\tj : %d\n",j);
			}
		}
		printf("\nEnd of program\n");
} 
