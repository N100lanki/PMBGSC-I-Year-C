// pattern

#include<stdio.h>
void main()
{
	int row,i,j;
	printf("enter number of rows : ");
	scanf("%d",&row);
	
		for(i=row;i>=1;i--)
		{
			for(j=1;j<=i;j++)
			{
				printf("*");
			}
			printf("\n");
		}
}
