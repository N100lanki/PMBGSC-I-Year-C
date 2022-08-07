// program showing the concept of Hierarchical inheritance

#include<iostream>
using namespace std;

class Parent
{
	public:
		void show()
		{
			cout<<"show method of parent class"<<endl;
		}
};

class Child1 : public Parent
{
	public:
		void display()
		{
			cout<<"display method of child1 called..!!"<<endl;
		}
};
class Child2 : public Parent
{
	public:
		void draw()
		{
			cout<<"draw method of child2 called..!!"<<endl;
			show();
		}
};
int main()
{
	Child1 obj1;
	obj1.display();
	obj1.show();
	
	Child2 obj2;
	obj2.draw();	
			
}
