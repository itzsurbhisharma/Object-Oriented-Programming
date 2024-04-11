//PROGRAM writng CHARACTER BY CHARACTER
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream x;
	x.open("good.txt",ios::ate);
	int a=x.tellp();
    cout<<"Put pointer is at"<<ends<<a;
    /*char ch;
    cout<<"enter the data\n";
    while(ch!='*')
    {
cin>>ch;
x.put(ch);                              
    }*/
    
}
