// program showing the concept of union

#include<stdio.h>
union Student
{
	int rno;
	float per;
	char name[20];
};	
void main()
{
	union Student s;
	printf("sizeof union : %lu\n",sizeof(s));		
	
			printf("\nEnter name : ");
			scanf("%[^\n]s",s.name);
			printf("Name : %s\n",s.name);
			
			printf("Enter roll number : ");
			scanf("%d",&s.rno);
			printf("Roll Number : %d\n",s.rno);
			
			printf("Enter percentage : ");
			scanf("%f",&s.per);			
			printf("Percentage : %.2f\n",s.per);
			
}
