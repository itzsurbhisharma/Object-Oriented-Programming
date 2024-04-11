#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class demo
{
	public:
		demo()
		{
			cout<<"cc"<<endl;
		}
};
void fun()
{
	static demo d;
}
int main()
{
	fun();
	fun();
}
