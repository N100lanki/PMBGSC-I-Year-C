// program showing the concept of constructor

#include<iostream>
using namespace std;

class Demo
{
	public:
		Demo()
		{
			int rno=101;
			double per=78.89;
			char name[50]="Andrew anderson";
			
			cout<<"Default constructor called..!!"<<endl;
			
			cout<<"Roll Number : "<<rno<<endl;
			cout<<"Percentage : "<<per<<endl;
			cout<<"Name : "<<name<<endl;
		}
};

int main()
{
	Demo d;
}
