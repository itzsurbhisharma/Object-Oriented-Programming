//PROGRAM TO READ A FILE
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream ob("demo.txt");
	char ch;
	while(ob)
	{
		if(ch==' ')
		{
			break;
		}
		ob.get(ch);
		cout<<ch;
		
	}
	
}
