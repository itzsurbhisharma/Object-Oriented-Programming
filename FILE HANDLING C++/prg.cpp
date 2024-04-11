#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<fstream.h>
#include<stdlib.h>
void main()
{
	ofstream fout;
	ifstream fin;
	char fname[20];
	char rec[80], ch;
	clrscr();

	cout<<"Enter file name: ";
	cin.get(fname, 20);

	fout.open(fname, ios::out);

	if(!fout)
	{
		cout<<"Error in opening the file "<<fname;
		getch();
		exit(1);
	}
	cin.get(ch);

	cout<<"\nEnter a line to store in the file:\n";
	cin.get(rec, 80);
	fout<<rec<<"\n";
	cout<<"\nThe entered line stored in the file successfully..!!";
	cout<<"\nPress any key to see...\n";
	getch();
	fout.close();

	fin.open(fname, ios::in);
	if(!fin)
	{
		cout<<"Error in opening the file "<<fname;
		cout<<"\nPress any key to exit...";
		getch();
		exit(2);
	}

	cin.get(ch);
	fin.get(rec, 80);
	cout<<"\nThe file contains:\n";
	cout<<rec;
	cout<<"\n\nPress any key to exit...\n";
	fin.close();

	getch();
}
