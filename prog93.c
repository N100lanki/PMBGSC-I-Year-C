// program showing the concept of array of structure

#include<stdio.h>
struct Student
{
	int rno;
	float per;
	char name[50];
};	
void main()
{
	struct Student s[50];
	int n,i;
		printf("enter number of student : ");
		scanf("%d",&n);
		
		for(i=0;i<n;i++)
		{
			printf("\nenter %d student details : ",i+1);
			getchar();
			printf("\nEnter name : ");
			scanf("%[^\n]s",s[i].name);
			
			printf("Enter roll number : ");
			scanf("%d",&s[i].rno);
			
			printf("Enter percentage : ");
			scanf("%f",&s[i].per);			
		}
		printf("\n\tStudent Details\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t%s\t%.2f\n",s[i].rno,s[i].name,s[i].per);
		}
}
