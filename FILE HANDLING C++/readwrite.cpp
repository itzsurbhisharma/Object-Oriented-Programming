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
		product p;
		
		
		cout<<"Enter product name";
		cin>>p.name;
		cout<<"Enter price";
		cin>>p
		.price;

		ofstream x("Product.txt");
		x.write((char*)&p,sizeof(p));
		x.close();
		
		product p1;
		
		ifstream x1("Product.txt");
		x1.read((char*)&p1,sizeof(p1));
		
		
		cout<<"The details are "<<endl;
		cout<<p1.name<<endl;
		cout<<p1.price;
		
		
		
		
}
