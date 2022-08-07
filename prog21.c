// program showing the concept of switch statement

#include<stdio.h>
void main()
{
	int i=1,num;
	
		printf("enter value of num : ");
		scanf("%d",&num);
		       // 1 ---------- 2 
			switch(i++)
			{
				case 1 : num++; // 10 --------- 11
				case 2 : num++; // 11 --------- 12
				case 3 : num++; // 12 --------- 13
				case 4 : --num; // 12
				default : printf("Value of num : %d\n",num++); // 12 ------ 13
			}
}

