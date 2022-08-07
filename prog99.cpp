// program 

#include<iostream>
using namespace std;

namespace mySpace1
{
int a = 100;
}

namespace mySpace2
{
int a = 200;
}

int main()
{
	cout<<"value of a : "<<mySpace1::a<<endl;
	cout<<"value of a : "<<mySpace2::a<<endl;

}
