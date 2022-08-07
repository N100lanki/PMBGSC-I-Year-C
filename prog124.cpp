// program showing the concept of hybrid inheritance

#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	protected:
	int rno;
	char name[50];
};

class Marks : public Student
{
	protected:
		int p,c,m;
};
class Sessional 
{
	protected:
		int in,ex;
};
class Result : public Marks,public Sessional
{
	public:
	void setData(char name[50],int rno,int p,int c,int m,int in,int ex)
	{
		strcpy(this->name,name);	
		this->rno=rno;
		this->p=p;
		this->c=c;
		this->m=m;
		this->in=in;
		this->ex=ex;
	}
	void calculation()
	{
		int total = p+c+m+in+ex;
			cout<<"Total marks : "<<total<<endl;
		double per = total/5.0;
			cout<<"Percentage : "<<per<<endl;
	}
	void display()
	{
		cout<<"\nStudent details : \n";
		cout<<"Name : "<<name<<endl;
		cout<<"Roll Number : "<<rno<<endl;
		cout<<"\nPhysics marks : "<<p<<endl;
		cout<<"Chemistry marks : "<<c<<endl;
		cout<<"Maths marks : "<<m<<endl;
		cout<<"Interal marks : "<<in<<endl;
		cout<<"External marks : "<<ex<<endl;
	}
};

int main()
{
	int rno,p,c,m,in,ex;
	char name[50];
	
		cout<<"Enter name : ";
		cin.getline(name,50);
		
		cout<<"Enter roll number : ";
		cin>>rno;
		
		cout<<"Enter p,c and m marks : ";
		cin>>p>>c>>m;
		
		cout<<"Enter internal and external marks : ";
		cin>>in>>ex;
		
		Result obj;
		obj.setData(name,rno,p,c,m,in,ex);
		obj.display();
		obj.calculation();
}
