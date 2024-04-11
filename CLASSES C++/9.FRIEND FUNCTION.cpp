//FRIEND FUNCTION
#include<conio.h>
#include<iostream>
using namespace std;
class demo
{
int x;
public:
void get()
{
	cout<<"Enter the value"<<endl;
cin>>x;
}
friend void display(demo);//FRIEND FUNCTION DECLARATION
};
void display(demo d1)
{
	cout<<"The value is "<<endl;
cout<<d1.x;
}
int main()
{
demo d,d2,d3;
d.get();
display(d);//PASSING OBJECT IN AS THE ARGUMENT
d2.get();
display(d2);
d3.get();
display(d3);
getch();
return 0;
}
