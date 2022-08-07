// program showing the concept of constructor

#include<iostream>
#include<string.h>
using namespace std;

class Demo
{
	private:
		int rno;
		double per;
		char name[50];
	public:
		Demo()
		{
			rno=101;
			per=78.89;
			strcpy(name,"Andrew anderson");
			
			cout<<"Default constructor called..!!"<<endl;
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
	Demo d;
	d.display();
}
