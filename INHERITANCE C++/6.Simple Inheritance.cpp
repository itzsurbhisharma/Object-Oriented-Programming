//PROGRAM TO IMPLEMENT SIMPLE INHERITANCE

#include<iostream>
using namespace std;
class base_integer
{
	int y;
	protected:
    int x;
    public:
    void get()
    {
    cout<<"\nenter value of X";
    cin>>x;
    cout<<"\nenter value of Y";
    cin>>y;
    }
    void display()
    {
    cout<<"\nthe value of X is = "<<x;
    cout<<"\nthe value of Y is = "<<y;
    }
    void increment()
    {
    x++;
    y++;
    }
    };
    class d_integer:private base_integer //d_integer derived from base_integer
    {
    public:
    void accessdata()
    {
    get();
    display();
    increment();
    display();
    }
    };
                    main()
                    {
                    base_integer b;
                    d_integer d;
                 d.accessdata();
                }
                                                        
                                      
