#include<iostream>
#include<fstream>
#include<string>
using namespace std;
main()
{
	ofstream outf("imp.txt");
	
	cout<<"Enter Name: ";
	string nm;
	getline(cin,nm);
	
	outf<<nm<<endl;
	
	cout<<"Enter Roll Number: ";
	int roll;
	cin>>roll;
	
	outf<<roll<<endl;
	
	outf.close();
}
