#include<iostream>
using namespace std;
class demo
{
	int a;
	public:
		int b;
		void get()
		{
			a=5;
			b=10;
		}
		void print()
		{
			cout<<a<<endl<<b<<endl;
		}
		protected:
		int geta()
		{
			return(a);
		}
};
class d:protected demo
{
	int c;
	public:
		void add()
		{
			get();
			c=b+geta();
		}
		void display()
		{
			print();
			cout<<"Sum is "<<c;
		}
};
main()
{
d ob;
//ob.get();
ob.add();
//ob.print();	
ob.display();
}




