// pattern
/*
1  *
2  **
4  ****
7  *******
11 ***********
16 ****************
*/

#include<stdio.h>
void main()
{
	int row,i,j,sum=1;
	printf("enter number of rows : ");
	scanf("%d",&row);
	
		for(i=0;i<row;i++)
		{
				sum = sum + i;
				printf("%d\t",sum);
					for(j=1;j<=sum;j++)
					{
						printf("*");
					}
					printf("\n");
		}
}
