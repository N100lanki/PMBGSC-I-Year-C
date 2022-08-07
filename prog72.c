// program showing the concept of multidimensional array

#include<stdio.h>
void main()
{
	int arr[2][3][3]={
							{
								{1,2,3},
								{4,5,6},
								{6,6,7}
							},
							{
								{3,4,5},
								{6,7,8},
								{4,3,2}
							}
						  },i,j,k;
	for(i=0;i<2;i++)
	{
		printf("%d matrix\n",i+1);
			
			for(j=0;j<3;j++)
			{
				for(k=0;k<3;k++)
				{
					printf("%d\t",arr[i][j][k]);
				}
				printf("\n");
			}
			printf("\n");
	}
}
