//PROGRAM TO ILLUSTRATE this POINTER
#include<iostream>
#include<conio.h>
using namespace std;
class integer
{
    private:
    	int x;
    public:
        void show_address();
        integer get_value(int x)
        {
        	this->x=x;
        	cout<<"x is "<<x<<endl;
        	return *this;
		}
		void show_value()
		{
			cout<<"Data Member x "<<x<<endl;
		}
              
};
    void integer::show_address()
    {
        cout<<"My Object's Address is = "<<this<<"\n";
    }
    	int main()
        {
	        integer a,b,c;
	        a.show_address();
	        a.get_value(5).show_value();
	        b.show_address();
	        c.show_address();
	        getch();
	        return 0;
        }
