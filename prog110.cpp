// program 
#include<iostream>
using namespace std;

class Demo
{
	private:
		int a,b;
	public:
		void setData(int a,int b)
		{
			this->a = a;
			this->b = b;
				add();    // this->add();
				this->sub();
				mul();
		}
		void add()
		{
			cout<<"Sum : "<<a+b<<endl;
		}
		void sub()
		{
			cout<<"Sub : "<<a-b<<endl;
		}
		void mul()
		{
			cout<<"Mul : "<<a*b<<endl;
		}
};

int main()
{
	Demo obj;
	int a,b;
		cout<<"Enter values of a and b : ";
		cin>>a>>b;
	
	obj.setData(a,b);		

}
