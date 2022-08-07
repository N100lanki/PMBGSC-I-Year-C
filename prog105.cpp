// program 
#include<iostream>
using namespace std;

class Demo
{
	private:
		void show()
		{
			cout<<"show method called..!!"<<endl;
		}

	public:
		void display()
		{
			cout<<"display method called..!!"<<endl;
			show();
		}
};

int main()
{
	Demo obj;
	obj.display();
}
