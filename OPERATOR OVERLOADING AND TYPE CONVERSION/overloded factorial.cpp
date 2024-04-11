//PROGRAM TO CALCULATE THE FACTORIAL OF A NUMBER USING OVERLODED LOGICAL NOT(!)
#include<iostream.h>
#include<conio.h>
class factorial
{
      private:
              int num;
              public:
                     factorial (int n)
                     
                     {
                               num=n;
                               }
                               int operator !();
                               };
                               int factorial::operator !() //overloading operator !
                               {
                                   int fact1=1;
                                   for(int i=2;i<=num;i++)
                                   fact1=fact1*i;
                                   return (fact1);
                                   }
                                   int main()
                                   {
                                       factorial f(5);
                                       int fact;
                                       fact=!f; //overloded operator function call
                                       cout<<"factorial ="<<fact;
                                       getch();
                                       return 0;
                                       }
