//PROGRAM ILLUSTRATES THE CONCEPT OF INHERITENCE (PUBLIC INHERITENCE)
#include<iostream.h>
#include<conio.h>

class baseclass
{
      private:
              int num1;
              public:
                     void base_read()
                     {
                          cout<<"\n Enter number num1 =";
                          cin>>num1;
                          }
                          void base_show()
                          {
                               cout<<"num1 ="<<num1;
                               }
                               }; //base class specification ends
                               class derievedclass:public baseclass
                               {
                                     private:
                                             int num2;
                                             public:
                                                    void derieved_read()
                                                    {
                                                         cout<<"\n Enter second number num2= ";
                                                         cin>>num2;
                                                         }
                                                         void derieved_show()
                                                         {
                                                              cout<<"\n Number2 is "<<num2;
                                                              }
                                                              }; //derieved class specification ends
                                                              int main()
                                                              {
                                                                  baseclass b1; //OBJECT OF BASE CLASS
                                                                  derievedclass d1; //Creating objects of derived class
                                                                  d1.base_read(); //access base's public member
                                                                  d1.derieved_read(); //acess derieved's public member
                                                                  d1.base_show();
                                                                  d1.derieved_show();
                                                                  b1.base_read();
                                                                  b1.base_show();
                                                                  //b1.derived_show(); //illegal operation
                                                                 d1.base_read();
                                                                 d1.base_show();
                                                                  getch();
                                                                  return 0;
                                                                  }
                                     
                          
              
