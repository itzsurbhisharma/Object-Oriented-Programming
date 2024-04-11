
#include<iostream>

using namespace std;

class demo
{
	int a,b;
	
	public:
	demo()
	{
		cout<<"constructor\n";
		a=10;
		b=20;
	}
		void put()
		{
			cout<<a<<"\t"<<b<<endl;
		}
};
int main()
{
	demo d;	
	d.put();
}
