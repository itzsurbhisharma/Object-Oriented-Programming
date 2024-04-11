//USE OF CONSTRUCTOR MEMBER FUNCTION TO INITIALIZE OBJECT DURING ITS CREATION
#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length,width;
    public:
    rectangle()
    {
    	length=20;
    	width=30;
    	cout<<"default constructor\n";
	}
	 rectangle(int , int ); 
	rectangle(rectangle &r)
	{
	length=r.length;
	width= r.width;
		cout<<"Copy constructor\n";
	}
	~rectangle()
	{
		cout<<"\n Destructor\n";
	}
    void display(); 
};
rectangle::rectangle(int a, int b):length(a),width(b)
{
	cout<<"Parametarized Constructor\n";
}
 void rectangle:: display()
    {
        cout<<"\nI am function Display\n" ;
        cout<<length<<ends<<width<<endl;
    } 
    main()
    {
    rectangle r1;
	r1.display();
	int i,j;
	cout<<"\n enter the values\n";
	cin>>i>>j;
	rectangle r2(i,j);
		r2.display();
		rectangle r3(r1);
		r3.display();
    }
                                         
                                 
