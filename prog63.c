// program showing the concept of function

#include<stdio.h>

void display();  // funtion declaration

void main()
{
	printf("Before calling\n");
	display();	// function calling		
	printf("After calling\n");
}

// function definition

void display()
{
	printf("\tdisplay function called..!!\n");
}
