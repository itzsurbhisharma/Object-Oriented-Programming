//class to class conversion in source class
#include<conio.h>
#include<iostream.h>
class rupee
{
      double rs;
      public:
             rupee (double rs1)
             {
                   rs=rs1;
                   }
             void display()
             {
                  cout<<"In Rupees:"<<rs;
                  }
             rupee()
             {
                    rs=0;
                    }      
      };
class dollar
{
      double dl;
      public:
            dollar (double dol)
             {
                    dl=dol;
                    }
                    /*void read()
                    {
                         cout<<"enter dollar";
                         cin>>d1;
                     }*/
             operator rupee()
             {
                      double r1;
                      r1=dl*50;
                      return(rupee(r1));
                      }
      
      };
      
      main()
      {
            dollar d(5);
           // d.read();
            rupee r=d;
            r.display();
            getch();
            
            }
