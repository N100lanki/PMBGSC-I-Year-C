
// program 

#include<stdio.h>
int size; // global variable

int* getArray(int arr[])
{
int i;
		printf("Enter size of array : ");
		scanf("%d",&size);
		
		printf("Enter array elements : ");
		for(i=0;i<size;i++)
		{
			scanf("%d",&arr[i]);
		}

		return arr;
}
void main()
{
	int arr[50],*ptr,i;

		ptr=getArray(arr);
			
		printf("\n array elements are : \n");
		for(i=0;i<size;i++)
		{
			printf("%d\t",*(ptr+i));
		}
}
