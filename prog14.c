// program to find out greater number among three number

#include<stdio.h>
void main()
{
		int a,b,c;
			printf("Enter three numbers : ");
			scanf("%d%d%d",&a,&b,&c);
			
			if(a>b)
			{
				if(a>c)
					printf("%d is greater\n",a);
				else
					printf("%d is greater\n",c);
			}			
			else
			{
				if(b>c)
					printf("%d is greater\n",b);
				else
					printf("%d is greater\n",c);
			}
}
