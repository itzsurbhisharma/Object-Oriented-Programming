#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
	ofstream outf("student.txt");
	
	cout<<"Enter name";
	string name;
	getline(cin,name);
	
	cout<<"Enter roll number";
	int roll;
	cin>>roll;
	
	outf<<name<<endl;//write to file data
	outf<<roll<<endl;
	
	outf.close();
	
ifstream inf("student.txt");
	string name1;
	int roll1;
	inf>>name1;
	inf>>roll1;
	
	cout<<"Name is "<<name1<<endl;
	cout<<"Roll number is "<<roll1<<endl;
	inf.close();
}
