//PROGRAM TO ILLUSTRATE HOW AN EXCEPTION IS HANDLED USING TRY-CATCH BLOCK AND THROW STATEMENT
#include<iostream>
using namespace std;
void check(int);
 main()
{
    int x, y;
    cout<<"enter numerator(x) and denominator(y) =";
    cin>>x>>y;
    try
    {
             check(y);
              cout<<"x/y ="<<x/y;
              }
              catch(int i) //catches the exception
              {
              	cout<<ends<<ends<<ends<<ends<<i;
                        cout<<"Exception :Division by 0 not allowed";
                        }
                        
                        }
void check(int a)
{
		 if(a==0) //detect an exception
              throw a; //throw on exception				
			  }                        
                        
              
