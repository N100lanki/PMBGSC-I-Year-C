// program showing the concept of function

#include<stdio.h>

// function definition

void show()
{
	printf("show method called..!!\n");
}
void display()
{
	printf("display function called..!!\n");
		show();
}

void main()
{
		display();	// function calling		
}


