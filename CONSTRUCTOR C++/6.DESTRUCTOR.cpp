//TRACE THE FLOW OF EXECUTION OF DESTRUCTOR IN THE CLASS
#include<conio.h>
#include<iostream.h>
class counter
{
      int id;
      public:
             counter(int i)
             {
                         id=i;
                         cout<<"\n Constructor of object with id "<< id<<" runs ";
                         }
                         ~counter()
                         {
                                   cout<<"\n Objects with id "<<id<<" destroyed";
                                   getch();
                                   }
                                   };
                                   int main()
                                   {
                                       counter c1(1);
                                       counter c2(2);
                                       counter c3(5);
                                       cout<<"\n End of main";
                                       getch();
                                       return 0;
                                       }
                                   
