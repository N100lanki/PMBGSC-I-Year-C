// program showing the conept of binary search

#include<stdio.h>
void main()
{
	int arr[50],size,search,i,first,last,middle;
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
		
		printf("\nEnter element to be search : \n");
		scanf("%d",&search);

		first = 0;
		last=size-1;
		middle=(first+last)/2;
		
		while(first<=last)
		{
				if(arr[middle]<search)
					first=middle+1;
				else if(arr[middle]==search)
				{
					printf("ElEMENET FOUND AT POSITION : %d\n",middle+1);
					break;	
				}	
				else
					last = middle-1;
					
				middle=(first+last)/2;
		}		
		if(first>last)
			printf("Element not found\n");
		
}








