// program to print even number series

#include<stdio.h>
void main()
{
int i,n;

	printf("Enter number : ");
	scanf("%d",&n);

	printf("\n%d even numbers\n",n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",2*i);
	}

	printf("\neven numbers upto %d\n",n);
	for(i=1;i<=n/2;i++)
	{
		printf("%d\t",2*i);
	}

}
