// program showing the concept of constructor

#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

class Demo
{
	private:
		int rno;
		double per;
		char name[50];
	public:
		Demo(char name[],int rno,double per)
		{
			this->rno=rno;
			this->per=per;
			strcpy(this->name,name);			
			cout<<"Parameterized constructor called..!!"<<endl;
		}
		void display()
		{	
			cout<<"Roll Number : "<<rno<<endl;
			cout<<"Percentage : "<<per<<endl;
			cout<<"Name : "<<name<<endl;
		}
};

int main()
{
		int rno;
		double per;
		char name[50];

			cout<<"Enter roll number :  ";
			cin>>rno;
			
			cout<<"Enter percentage : ";
			cin>>per;
			
			getchar();
			
			cout<<"Enter name : ";
			cin.getline(name,50);

	Demo d(name,rno,per);
	d.display();
}
