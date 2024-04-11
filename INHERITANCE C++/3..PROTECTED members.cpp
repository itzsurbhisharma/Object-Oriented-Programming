//PROGRAM TO DEMONSTRATE THE USE OF PUBLIC MEMBERS
#include<iostream.h>
#include<conio.h>
class num
{
      protected:
                int x,y;
                public:
                       void read()
                       {
                            cout<<"enter two numbers =";
                            cin>>x>>y;
                            }
                            void showxy()
                            {
                                 cout<<"x ="<<x<<"   y ="<<y;
                                 }
                                 };
                                 class result:protected num
                                 {
                                       private:
                                               int z;
                                               public:
                                                      
                                                      void add()
                                                      {
                                                           z=x+y;
                                                           }
                                                           void showz()
                                                           {
                                                                cout<<"\n Z is "<<z;
                                                                }
                                                                };
                                                                int main()
                                                                {
                                                                    result r1;
                                                                    r1.read();
                                                                    r1.add();
                                                                    r1.showxy();
                                                                    r1.showz();
                                                                    //r1.x=10; //generates error as base's protected member are not accessible
                                                                    getch();
                                                                    return 0;                                                                    
                                                                    }
                                                                    
