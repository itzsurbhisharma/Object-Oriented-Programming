//DISPLAY THE ACCOUNT INFORMATION OF CUSTOMER OF A BANK (INTIALIZER LIST)

#include<iostream>
using namespace std;
class account
{
      private:
              int accno;
              double balance;
              public:
                     account();
                     account(int,double);
                     void showbalance();
                     };
                     account::account(int a,double b):accno(a),balance(b)
                     {}
                     void account::showbalance()
                     {
                          cout<<"\nAccount number"<<accno;
                          cout<<"\nBalance ="<<balance;
                          }
                          main()
                          {
                                account a2(2,400);
                                a2.showbalance();
                        
                                return 0;
                                }
                                
                                          
