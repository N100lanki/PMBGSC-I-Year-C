// program to find out all the prime numbers between two entered numbers
#include<stdio.h>

void main()
{
	int i,j,n,m;
		printf("Enter initial and final limit : ");
		scanf("%d%d",&n,&m);
		
		for(j=n;j<=m;j++)
		{		
			for(i=2;i<=j/2;i++)
			{
				if(j%i==0)
					break;
			}
			if(i>j/2 && j>1)
				printf("%d\t",j);
		}
} 
