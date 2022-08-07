// pattern
/*
*
**
* *
*  *
*****
*/

#include<stdio.h>
void main()
{
	int row,i,j;
	printf("enter number of rows : ");
	scanf("%d",&row);
	
		for(i=1;i<=row;i++)
		{
			for(j=1;j<=i;j++)
			{
				if(j==1 || i==row || i==j)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
}
