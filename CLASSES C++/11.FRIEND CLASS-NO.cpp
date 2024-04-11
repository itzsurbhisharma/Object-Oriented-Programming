//WAP TO ILLUSTRATE THE CONCEPT OF FRIEND CLASS
#include<iostream>
using namespace std;
#include<conio.h>
class beta; //forward declaration of class
class alpha
{
      private:
              int x;
              public:
                     void get()
                     {
                          cin>>x;
                          }
                          friend class beta;
                          };//end of class alpha */
                          class beta
                          {
                                public:
                                       void display(alpha p)//object is passed as argument
                                       {
                                            cout<<"in display() a.x ="<<p.x<<"\n";
                                            }
                                            void show(alpha d)
                                            {
                                                 cout<<"in show() a.x="<<d.x<<"\n";
                                                 }
                                                 };
                                              
                                                 int main()
                                                 {
                                                     alpha a;
                                                     alpha a1;
                                                     a.get();
                                                     a1.get();
                                                     beta b;
                                                     b.display(a);
                                                     b.show(a1);
                                                     getch();
                                                     return 0;
                                                     }
