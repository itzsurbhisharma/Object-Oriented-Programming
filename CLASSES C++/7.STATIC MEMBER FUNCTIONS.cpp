//ILLUSTRATE THE USE STATIC MEMBER FUNCTION
#include<iostream>
using namespace std;
class account
{
      private:
              int acc_no;
              double balance;
              static double rate; //static data member declaration
              public:
                     void read()
                     {
                          cout<<"\nEnter account number and Balance";
                          cin>>acc_no>>balance;
                          }
                          void show()
                          {
                               cout<<"\n Account No ="<<acc_no;
                               cout<<"Intrest is ="<<rate;
                               cout<<"Balance is = "<<balance;
                               }
                               void qtr_rate_cal()
                               {
                                    double interest=(balance*rate*0.25);
                                    balance=balance+interest;
                                    }
                                    static void modify_rate(double incr)
                                    {
                                           rate =rate+incr;//modifying rate
                                           cout<<"modified rate of intrest is ="<<rate;
                                        
										   }
                                    };
                                    double account::rate=0.05; //static data member defination
                                    int main()
                                    {
                                        account a1,a2,a3;
                                        cout<<"Enter customer 1 Information...........\n";
                                        a1.read();
                                        cout<<"\nEnter customer 2 Information..........\n";
                                        a2.read();
                                        cout<<"enter 3";
                                        a3.read();
                                        a1.qtr_rate_cal();
                                         a1.show();
                                        account::modify_rate(0.01);//CALLING STATIC MEMBER FUNCTION
                                        //a1.qtr_rate_cal();
                                        a2.qtr_rate_cal();
                                       // a1.show();
                                        a2.show();
                                        a3.qtr_rate_cal();
                                        a3.show();
                                        
                                        return 0;
                                        }
                                        
                               
