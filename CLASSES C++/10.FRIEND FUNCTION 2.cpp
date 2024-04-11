#include<iostream>
using namespace std;
class rectangle
{
private:
        int l,b;
         friend class area ;      
};     
class area
{
	public:
		void getdata(rectangle &r1)
		{
			cout<<"Enter two values";
			cin>>r1.l;
			cin>>r1.b;
			cout<<endl<<"The values entered are "<<r1.l<<" "<<r1.b;
		}
		void calculate(rectangle &r1)
		{
			cout<<endl<<"The values entered are "<<r1.l<<" "<<r1.b;
           cout<<"Area is "<<r1.l * r1.b;
        }
};      
int main()
{
rectangle r;
area a;
a.getdata(r);
a.calculate(r);
return 0;
}
