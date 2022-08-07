	
	/*
	int a; 
	here a is a variable of type int,where int represents integer
	
	struct Student s;
	here s is a structure variable
	here s is a variable of type ____, where ____ represent structure 
	Student
	*/

	// program showing the concept of structure

	#include<stdio.h>
	typedef struct Student
	{
		int rno;
		float per;
		char name[50];
	}stud;
	
	void display(struct Student *s)
	{
		printf("Student details : \n");
		printf("Roll Number : %d\n",s->rno);
		printf("Percentage : %.2f\n",s->per);
		printf("Name : %s\n",s->name);	
	}
	void main()
	{
		stud s;
	
		printf("Enter roll number : ");
		scanf("%d",&s.rno);
	
		getchar();
		
		printf("Enter Name : ");
		scanf("%[^\n]s",s.name); // &s.name[0]
		
		printf("Enter percentage : ");
		scanf("%f",&s.per);
		
		display(&s);
	}
