//PROGRAM TO OVERLOAD += OPERATOR TO ADD TWO RATIONAL NUMBERS
#include<iostream.h>
#include<conio.h>
class rational 
{
      int nume;
      int deno;
      public:
             void read()
             {
                  cout<<"enter numerator and denominator of a number ";
                  cin>>nume>>deno;
                  }
                  void operator +=(rational rr2) //overloading += operator
                  {nume=nume+rr2.nume;
                  deno=deno+rr2.deno;
                      // nume=nume*rr2.deno+rr2.nume*deno;
                       //deno=deno*rr2.deno;
                       }
                       void show()
                       {
                            cout<<nume<<"/"<<deno;
                            }
                            };
                            int main()
                            {
                                rational r1,r2;
                                cout<<"enter first rational number \n";
                                r1.read();
                                cout<<"enter second rational number \n";
                                r2.read();
                                r1+=r2;//overloded function call
                                cout<<"r1 after += operation\n";
                                r1.show();
                                getch();
                                return 0;
                                }
                                
                            
                  
                       
