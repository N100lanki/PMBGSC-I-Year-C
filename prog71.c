// program showing the concept of merging two array

#include<stdio.h>
void main()
{
	int arr1[50],arr2[50],size1,size2,i;
		printf("Enter size of first array : ");
		scanf("%d",&size1);
	
		printf("Enter size of second array : ");
		scanf("%d",&size2);
		
		printf("Enter first array elements : ");
		for(i=0;i<size1;i++)
		{
			scanf("%d",&arr1[i]);
		}
		printf("Enter second array elements : ");
		for(i=0;i<size2;i++)
		{
			scanf("%d",&arr2[i]);
		}
		
		printf("\nFirst Array elements are : \n");
		for(i=0;i<size1;i++)
		{
			printf("%d\t",arr1[i]);
		}
		printf("\nSecond Array elements are : \n");
		for(i=0;i<size2;i++)
		{
			printf("%d\t",arr2[i]);
		}
		
		for(i=0;i<size2;i++,size1++)
		{
			arr1[size1]=arr2[i];
		}	
		
		printf("\nArray elements after merging : \n");
		for(i=0;i<size1;i++)
		{
			printf("%d\t",arr1[i]);
		}
	
}








