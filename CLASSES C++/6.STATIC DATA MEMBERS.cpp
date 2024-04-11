//TO DISPLAY THE CUSTOMER ACCOUNT INFORMATION AND USE STATIC DATA MEMBERS
#include<iostream>
using namespace std;
class account
{
      int acc_no;
      double balance;
      static double rate;
      public:
             void read()
             {
                  cout<<"enter account number and balance =";
                  cin>>acc_no>>balance>>rate;
                  }
                  void show()
                  {
                       cout<<"\nAccount no = "<<acc_no;
                       cout<<"intrest = "<<rate;
                       cout<<"balance = "<<balance;
                       }
                       void qtr_rate_cal()
                       {
                            double intrest=(balance*rate*0.25);
                            balance=balance+intrest;
                            }
                            };
                            double account::rate=1; //static data member definition
                            int main()
                            {
                                account a1,a2;
                                cout<<"enter coustomer 1 information.......\n";
                                a1.read();
                                cout<<"enter customer 2 information........\n";
                                a2.read();
                                a1.qtr_rate_cal();
                                a2.qtr_rate_cal();
                                a1.show();
                                a2.show();
                                cout<<"\n"<<"size of a1"<<sizeof(a1);
                                
                                return 0;
                                }
