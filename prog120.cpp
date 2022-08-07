// program showing the concept of single inheritance

#include<iostream>
using namespace std;
class Area
{
	protected:
		int l,b;
	public:
		int getArea()
		{
			return l*b;
		}
};
class Volume : public Area
{
	private:
		int h;
	public:
		void setData(int l,int b,int h)
		{
			this->l=l;
			this->b=b;		
			this->h=h;			
		}
		int getVolume()
		{
			return getArea()*h;
		}
};

int main()
{
	int l,b,h;
		cout<<"Enter l,b and h : ";
		cin>>l>>b>>h;
		
		Volume obj;
			obj.setData(l,b,h);
			cout<<"Area : "<<obj.getArea()<<endl;
			cout<<"Volume : "<<obj.getVolume()<<endl;
}
