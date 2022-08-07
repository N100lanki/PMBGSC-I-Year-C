// program to add an element at specific index

#include<stdio.h>
void main()
{
	int arr[50],size,i,index,value;
		printf("Enter size of array : ");
		scanf("%d",&size);
	
		printf("Enter array elements : ");
		for(i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
		}
		
		printf("\n Array elements are : \n");
		for(i=0;i<size;i++)
		{
			printf("%d\t",arr[i]);
		}
		printf("enter index and value : ");
		scanf("%d%d",&index,&value);

		for(i=size-1;i>=index;i--)
		{
			arr[i+1]=arr[i];
		}
		arr[index]=value;
		
		printf("\nArray elements : \n");
		for(i=0;i<=size;i++)
		{
			printf("%d\t",arr[i]);
		}
	
}








