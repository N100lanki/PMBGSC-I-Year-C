
	// program to pass 1d array in a function

	#include<stdio.h>

	int size=5; // global variable
	void display(int arr[])
	{
	int i;
		printf("\nArray elements are : \n");
		for(i=0;i<size;i++)
		{
			printf("%d\t",arr[i]);
		}
	}
	void main()
	{
		int arr[5]={11,22,33,44,55};
		display(arr);
	}
