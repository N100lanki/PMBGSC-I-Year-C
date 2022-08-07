// program showing the concept of structure

#include<stdio.h>
struct Student
{
	int rno;
	float per;
	char name[50];
};
void main()
{
struct Student s={101,78.89,"andrew anderson"};
	printf("Student details : \n");
	printf("Roll Numer : %d\n",s.rno);
	printf("Percentage : %.2f\n",s.per);
	printf("Name : %s\n",s.name);
	
}
