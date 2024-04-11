//READING FILE CHARACTER BY CHARACTER
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream x("good.txt");
    char ch;
    int b;
    
	b=x.tellg();
    cout<<"\nGetpointer is at"<<ends<<b<<endl;
x.seekg(3);
	b=x.tellg();
    cout<<"\nGetpointer is at"<<ends<<b<<endl;
   x.seekg(-2,ios::beg);
    	b=x.tellg();
    cout<<"\nGetpointer is at"<<ends<<b<<endl;
//    while(x.eof()==0)
//    {
//                x.get(ch);
//				     cout<<ch;
//    }
   
}
