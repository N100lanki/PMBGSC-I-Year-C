// program showing the concept of multiplication of two 2d array

#include<stdio.h>
void main()
{
	int arr1[20][20],arr2[20][20],arr3[20][20],i,j,k,r1,r2,c1,c2;
		printf("Enter rows and column of matrix 1 : ");
		scanf("%d%d",&r1,&c1);
		
		printf("Enter rows and column of matrix 2 : ");
		scanf("%d%d",&r2,&c2);
		
		if(c1==r2)
		{
			printf("Enter array elements of first matrix : ");
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					scanf("%d",&arr1[i][j]);
				}
			}
			printf("Enter array elements of second matrix : ");
			for(i=0;i<r2;i++)
			{
				for(j=0;j<c2;j++)
				{
					scanf("%d",&arr2[i][j]);
				}
			}

			printf("\nArray elements of first matrix : \n");
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					printf("%d\t",arr1[i][j]);
				}
				printf("\n");
			}
			printf("\nArray elements of second matrix : \n");
			for(i=0;i<r2;i++)
			{
				for(j=0;j<c2;j++)
				{
					printf("%d\t",arr2[i][j]);
				}
				printf("\n");
			}

			for(i=0;i<r1;i++)
			{
				for(j=0;j<c2;j++)
				{
					arr3[i][j]=0;
						for(k=0;k<c1;k++)
						{
							arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
						}
				}
			}
			printf("\nArray elements after multiplication : \n");
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c2;j++)
				{
					printf("%d\t",arr3[i][j]);
				}
				printf("\n");
			}
			
		}
		else
			printf("Multiplication not possible\n");
}
