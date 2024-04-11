//PROGRAM TO ILLUSTRATE THE ORDER OF EXECUTION OF CONSTRUCTOR AND DESTRUCTOR WHILE HANDLING OBJECTS OF DERIVED CLASSES
#include<iostream>
using namespace std;
class base
{
	public:
	base()
	{
		cout<<"parent Constructor\n";
	}
	~base()
	{
		cout<<"parent destructor\n";
	}
	
};
class derived:public base
{
	public:
	derived()
	{
		cout<<"child Constructor\n";
	}
	~derived()
	{
		cout<<"child destructor\n";
	}
};
main()
{
	derived b;
}
