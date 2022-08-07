	// program showing the concept of structure

	#include<stdio.h>
	struct Student
	{
		int rno;
		float per;
		char name[50];
	};
	struct Student s;
	
	void display()
	{
		printf("Student details : \n");
		printf("Roll Numer : %d\n",s.rno);
		printf("Percentage : %.2f\n",s.per);
		printf("Name : %s\n",s.name);	
	}
	void main()
	{	
		printf("Enter roll number : ");
		scanf("%d",&s.rno);
	
		getchar();
		
		printf("Enter Name : ");
		scanf("%[^\n]s",s.name); // &s.name[0]
		
		printf("Enter percentage : ");
		scanf("%f",&s.per);
		
		display();
	}
