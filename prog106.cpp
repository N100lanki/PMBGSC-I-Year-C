// program 
#include<iostream>
using namespace std;

class Demo
{
	public:
		void addition(int a,int b)
		{
			cout<<"Sum : "<<a+b<<endl;
		}
};

int main()
{
	Demo obj;
	int a,b;
		cout<<"Enter values of a and b : ";
		cin>>a>>b;
		
	obj.addition(a,b);
}
