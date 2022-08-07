// program showing the concept of selection sort

#include<stdio.h>
void main()
{
	int arr[50],size,i,j,temp;
		printf("Enter size of array : ");
		scanf("%d",&size);
		
		printf("Enter array elements : ");
		for(i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
		}
		
		printf("\nArray elements are : \n");
		for(i=0;i<size;i++)
		{
			printf("%d\t",arr[i]);
		}
		
		for(i=0;i<size;i++)
		{
			for(j=i+1;j<size;j++)
			{
				if(arr[i]>arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}	
		printf("\nArray elements after reversing : \n");
		for(i=0;i<size;i++)
		{
			printf("%d\t",arr[i]);
		}
	
}








