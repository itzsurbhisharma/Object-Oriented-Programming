
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream x("copy.txt");
    char ch;
    cout<<x.tellg()<<endl;
    while(x.get(ch))
    {
    	cout<<ch;
	}
 cout<<endl<<x.tellg();







}
