
	// program showing the concept of pointer
	
	#include<stdio.h>
	void main()
	{
		int a,*ptr;
		printf("Enter value of a : ");
		scanf("%d",&a);
		
		printf("value of a : %d\n",a);
		printf("address of a : %p\n",&a);
		
		ptr = &a;
		printf("Address of ptr : %p\n",&ptr);
		printf("address which ptr holds : %p\n",ptr);
		printf("value at address which ptr : %d\n",*ptr);
	}
