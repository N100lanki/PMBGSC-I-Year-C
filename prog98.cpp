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

using namespace mySpace1;
int main()
{
	cout<<"value of a : "<<a<<endl;
}
