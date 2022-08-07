// program showing the concept of pointer to an array

#include<stdio.h>

void main()
{
	int arr[50],*ptr,size,i;
		printf("Enter size of array : ");
		scanf("%d",&size);
		
		printf("Enter array elements : ");
		for(i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
		}

		ptr=arr;
				
		printf("\n array elements are : \n");
		for(i=0;i<size;i++)
		{
		/*
			printf("%d\t",*ptr);
			ptr++;
		*/
		printf("%d\t",*(ptr+i));
		}
		// *(ptr+i) ===> *(ptr+i*sizeof(int))
}
