//AN ARRAY OF BANK OBJECTS
#include<iostream.h>
#include<conio.h>
class account
{
      private:
              int acc_no;
              char name[15];
              double balance;
              public:
                     void input_data();
                     void display_data();
                     };
                     void account :: input_data()
                     {
                          cout<<"\n Enter account number,name and balance =";
                          cin>>acc_no>>name>>balance;
                          }
                          void account ::display_data()
                       
              
                          {
                               cout<<"\nAccount Number is = "<<acc_no;
                               cout<<"\nAccount Holder name = "<<name;
                               cout<<"\nAccount balance is = "<<balance;
                               }
                               int main()
                               {
                               account acc[10]; //array of objects
                               int n;
                               cout<<"\nEnter Number of account holders";
                               cin>>n;
                               for(int i=0;i<n;i++)
                               {
                                       acc[i].input_data();
                                       }
                                       for(int i=0;i<n;i++)
                                       {
                                                       cout<<"\nInformation of Account="<<i+1;
                                                       acc[i].display_data();
                                                       }
                                                       getch();
                                                       return 0;
                                                       }
                                                       
                     
