// program showing the concept of multiple inheritance

#include<iostream>
using namespace std;
class Dim1
{
	public:
		void show()
		{
			cout<<"show method of dim1"<<endl;
		}
};
class Dim2 
{
	public:
		void show()
		{
			cout<<"show method of dim2"<<endl;
		}
};
class Child : public Dim1,public Dim2
{
};

int main()
{
	Child obj;
		obj.Dim1::show();
		obj.Dim2::show();

}
