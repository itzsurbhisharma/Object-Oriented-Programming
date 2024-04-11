//WAP to creat a file and enter data
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream c("demo.txt");
	char ch;
	while(c.get(ch))
	{
		cout<<ch;
	}
	}
