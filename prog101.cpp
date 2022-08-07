// program

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a,b,c;
	cout<<"Enter a ,b and c : ";
	cin>>a>>b>>c;
	
	double sum = a+b+c;
	cout<<"Sum : "<<sum<<endl;
	
	double avg = sum/3.0;
	cout<<"Average : "<<avg<<endl;	
	cout<<"Average : "<<setprecision(1)<<avg<<endl;	
	cout<<"Average : "<<setprecision(2)<<avg<<endl;	
	cout<<"Average : "<<setprecision(3)<<avg<<endl;	
	cout<<"Average : "<<setprecision(4)<<avg<<endl;	

}
