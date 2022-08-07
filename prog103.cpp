// program to swap two numbers 

#include<iostream>
using namespace std;
int main()
{
	int a,b;
		cout<<"Enter two numbers : ";
		cin>>a>>b;
		
		cout<<"Before swapping : "<<"\na : "<<a<<"\nb : "<<b<<endl;
			int temp = a ;
					a = b;
					b = temp;
		cout<<"After swapping : "<<"\na : "<<a<<"\nb : "<<b<<endl;

}
