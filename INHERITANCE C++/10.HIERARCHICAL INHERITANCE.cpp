//PROGRAM TO ILLUSTRATE HIERARCHICAL INHERITANCE
#include<iostream.h>
#include<conio.h>
class account
{
      protected:
                int accno;
                char name[20];
                public:
                       void get()
                       {
                            cout<<"\nEnter account number and Name"<<endl;
                            cin>>accno>>name;
                            }
                            void display()
                            {
                                 cout<<"Account number and Name is :"<<endl;
                                 cout<<accno<<name;
                                 }
                                 };
                                 class saving:public account
                                 {
                                       private:
                                               float roi;
                                               public:
                                                      void get()
                                                      {
                                                           account::get();
                                                           cout<<"\nEnter Rate of Intrest";
                                                           cin>>roi;
                                                           }
                                                           void display()
                                                           {
                                                                account::display();
                                                                cout<<"\nThe Rate of Intrest is "<<endl;
                                                                cout<<roi;
                                                                }
                                                                };
                                                                class current:public account
                                                                {
                                                                      float limit;
                                                                      public:
                                                                             void get()
                                                                             {
                                                                                  account::get();
                                                                                  cout<<"Enter Limit";
                                                                                  cin>>limit;
                                                                                  }
                                                                                  void display()
                                                                                  {
                                                                                       account::display();
                                                                                       cout<<"\nThe entered limit is ";
                                                                                       }
                                                                                       };
                                                                                       int main()
                                                                                       {
                                                                                           saving s;
                                                                                           current c;
                                                                                           s.get();
                                                                                           s.display();
                                                                                           c.get();
                                                                                           c.display();
                                                                                           return 0;
                                                                                           }
                                                                                       
                       
