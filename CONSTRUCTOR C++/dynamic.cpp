#include<iostream>
#include<string>
using namespace std;
class dyncons
{
string name;
int length;
	public :
	dyncons()    
	{
		length = 0;
    	name = new char[length + 1];
	}
    
	dyncons(string s)
    {
		length = s.length();
		name = new char[length + 1];
		name=s;
	}
		
	void op()
    {
		cout <<"\n"<< name<<ends<< ",Number of characters in the string is " <<name.length();
	}
	};
 
 
int main ()
{
  string first = "Hello";
  dyncons name1(first);
  dyncons name2("Example");
  dyncons name3("Quora");
	
  name1.op();
  name2.op();
  name3.op();
  
  return 0;
}
