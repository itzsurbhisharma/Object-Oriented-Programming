
#include<iostream>
using namespace std;
class publisher
{
protected:
char pname[20];
public:
void get()
                       {
                       cout<<"enter publisher name"<<endl;
                       cin>>pname;
                       }
                       void display()
                       {
                            cout<<"\nPublisher Name is"<<pname<<endl;
                            }
                            };
                            class distributor:public virtual publisher
                            {
                                  protected:
                                            char dname[20];
                                            public:
                                                   void getd()
                                                   {
                                                        cout<<"Enter the Distributor name"<<endl;
                                                        cin>>dname;
                                                        }
                                                        void displayd()
                                                        {
                                                             cout<<"the distributor name is---"<<dname;
                                                             }
                                                             };
                                                             class author:public virtual publisher
                                                             {
                                                                   protected:
                                                                             char aname[20];
                                                                             public:
                                                                                    void geta()
                                                                                    {
                                                                                         cout<<"enter the author name"<<endl;
                                                                                         cin>>aname;
                                                                                         }
                                                                                         void displaya()
                                                                                         {
                                                                                              cout<<"the author name is--"<<aname;
                                                                                              }
                                                                                              };
                                                                                              class book:public distributor,public author
                                                                                              {
                                                                                                    private:
                                                                                                            char bname[20];
                                                                                                            public:
                                                                                                                   void getb()
                                                                                                                   {
                                                                                                                        cout<<"enter the book name"<<endl;
                                                                                                                        cin>>bname;
                                                                                                                        }
                                                                                                                        void displayb()
                                                                                                                        {
                                                                                                                             cout<<"the author name is ---"<<bname;
                                                                                                                             }
                                                                                                                             };
                                                                                                                             int main()
                                                                                                                             {
                                                                                                                                 book b;
                                                                                                                                 b.get();
                                                                                                                                 b.display();
                                                                                                                                 b.getb();
                                                                                                                                 b.displayb();
                                                                                                                                
                                                                                                                                 return 0;
                                                                                                                                 }
                                                                                                                                 
