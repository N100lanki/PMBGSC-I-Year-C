// pattern

#include<stdio.h>
void main()
{
	int row,i,j,space;
	printf("enter number of rows : ");
	scanf("%d",&row);
	
		for(i=1;i<=row;i++)
		{
			for(space=1;space<=row-i;space++)
			{
					printf(" ");
			}
			for(j=1;j<=i;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
}
