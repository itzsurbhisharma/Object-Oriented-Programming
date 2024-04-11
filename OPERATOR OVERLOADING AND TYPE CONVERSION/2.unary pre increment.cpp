// Unary Operator overloding( pre-increment ++)
#include<iostream>
using namespace std;
class score 
{
      private:
    	int val;
        public:
        score()
        {
        val=10;
        }
        /*void operator++() //operator function definition
        {
        val=val+2;
        }*/
        int show()
        {
        return(val);
        }
        friend void operator++(score &s);
        };
         void operator++(score &s)
         {
         	s.val=s.val-3;
		 }
        int main()
        {
        score s1,s2;
        cout<<"\nInitial value of s1 object = "<<s1.show();
        cout<<"\nInitial value of s2 object = "<<s2.show();
        ++s1; //same as s1.operator++();

        ++s2;
        cout<<"\nFinal value of s1 object = "<<s1.show();
        cout<<"\nFinal value of s2 object = "<<s2.show();
        
                                         }
      
