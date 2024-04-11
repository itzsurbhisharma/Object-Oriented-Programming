//VIRTUAL BASE CLASS
#include<iostream.h>
#include<conio.h>
class grandparent
{
      protected:
                int base_data;
                public:
                       void readgp()
                       {
                            cout<<"enter data of grandparent :";
                            cin>>base_data;
                            }
                            };
                           // class parent1:  virtual public grandparent //inherit grandparent as virtual
                            class parent1:   public grandparent 
                            {
                                  protected:
                                            int parent1_data;
                                            public:
                                                   void readp1()
                                                   {
                                                        cout<<"enter data of parent1 :";
                                                        cin>>parent1_data;
                                                        }
                                                        };
                                                       // class parent2 : virtual public grandparent //inherit grandparent as virtual
                                                        class parent2 :  public grandparent
                                                        {
                                                              protected:
                                                                        int parent2_data;
                                                                        public:
                                                                               void readp2()
                                                                               {
                                                                                    cout<<"enter data of parent2 :";
                                                                                    cin>>parent2_data;
                                                                                    }
                                                                                    };
                                                                                    class child : public parent1,public parent2
                                                                                    {
                                                                                          private: 
                                                                                                   int sum;
                                                                                                   public:
                                                                                                          void add()
                                                                                                          {
                                                                                                               sum=base_data+parent1_data+parent2_data;
                                                                                                               }
                                                                                                               void show()
                                                                                                               {
                                                                                                                    cout<<"Grandparents data member ="<<base_data;
                                                                                                                    cout<<"\n data member of parent1 and parent 2 ="<<parent1_data<<"and "<<parent2_data;
                                                                                                                    cout<<"\n Sum of all data ="<<sum;
                                                                                                                    }
                                                                                                                    };
                                                                                                                    int main()
                                                                                                                    {
                                                                                                                        child c1;
                                                                                                                        c1.readgp();
                                                                                                                        c1.readp1();
                                                                                                                        c1.readp2();
                                                                                                                        c1.add();
                                                                                                                        c1.show();
                                                                                                                        getch();
                                                                                                                        return 0;
                                                                                                                        }
                            
