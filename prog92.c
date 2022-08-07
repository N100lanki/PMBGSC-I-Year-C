
	#include<stdio.h>
	struct Student
	{
		int rno;
		float per;
			struct Name
			{
				char name[50];
			}nm;
	}s;
	
	void main()
	{
		printf("Enter roll number : ");
		scanf("%d",&s.rno);
	
		getchar();
		
		printf("Enter Name : ");
		scanf("%[^\n]s",s.nm.name); // &s.name[0]
		
		printf("Enter percentage : ");
		scanf("%f",&s.per);
		
		printf("Student details : \n");
		printf("Roll Number : %d\n",s.rno);
		printf("Percentage : %.2f\n",s.per);
		printf("Name : %s\n",s.nm.name);	
	}
