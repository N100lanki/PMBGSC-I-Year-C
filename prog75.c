
	// program to pass 2d array in a function

	#include<stdio.h>

	int r=2,c=2; // global variable
	void display(int arr[2][2])
	{
	int i,j;
		printf("\nArray elements are : \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",arr[i][j]);
			}
			printf("\n");
		}
	}
	void main()
	{
		int arr[2][2]={{11,22},{44,55}};
		display(arr);
	}
