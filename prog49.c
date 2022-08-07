// program 
/*
1
22
333
4444
55555
*/

#include<stdio.h>

void main()
{
	int i,j,row;
		printf("Enter row : ");
		scanf("%d",&row);
		
		for(i=1;i<=row;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d",i);
			}
			printf("\n");
		}
} 
