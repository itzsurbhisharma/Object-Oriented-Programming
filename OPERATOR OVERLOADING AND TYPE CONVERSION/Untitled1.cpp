#include<iostream>
using namespace std;
class check
{
	int x;
	public:
		check()
		{
			cout<<"Enter the value ";
			cin>>x;
		}
		void show()
		{
			cout<<"The value is"<<endl<<x<<endl;
		}
		void operator *(check &ob)
		{
			x=x%ob.x;
			ob.x=ob.x*5;
		}
};
main()
{
check c1,c2;
cout<<"Before overloading"<<endl;
c1.show();
c2.show();
cout<<"After overloading"<<endl;
c1*c2;//c1.operator *(c2);
c1.show();
c2.show();


}
