	#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
	{
	
	ifstream inf("imp.txt");
	string name;
	int rollno;
	inf>>name;//read name from file data
	inf>>rollno;//read cost from file data
	
	cout<<"Name is "<<name<<endl;
	cout<<"Roll Number is "<<rollno<<endl;
	inf.close();
}
