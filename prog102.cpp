// program

#include<iostream>
#include<iomanip>
#define PI 3.14 
using namespace std;
int main()
{
	double rad;
	cout<<"Enter radius : ";
	cin>>rad;
	
	double area = PI*rad*rad;
 	cout<<"Area of circle : "<<area<<endl;
 	cout<<"Area of circle : "<<setprecision(2)<<area<<endl;
}
