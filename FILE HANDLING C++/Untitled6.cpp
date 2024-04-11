	#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct product
{
	string name;
	int price;
};
main()
	{
	
	product p1;
	ifstream x("infor.txt");
	x.read((char*)&p1,sizeof(p1));
	cout<<p1.name;
	cout<<p1.price;
	
	
	
	
	
	
	
	
	
	
}
