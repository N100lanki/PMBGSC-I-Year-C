// program showing the concept of function

#include<stdio.h>

//function declaration
void show();

// function definition

void display()
{
	printf("display function called..!!\n");
		show();
}
void show()
{
	printf("show method called..!!\n");
}

void main()
{
		display();	// function calling		
}


