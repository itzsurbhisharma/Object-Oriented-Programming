//PROGRAM TO DEMONSTRTE THE NEED OF VIRTUAL DESTRUCTOR

#include<iostream>
using namespace std;
class base
{
      public:
             base()
             {
                   cout<<"\nbase constructor";
                   }
                 ~base()
                   {
                          cout<<"\nbase destructor ";
                          }
                          };
                          class derive:public base
                          {
                                int *a;
                                public:
                                       derive()
                                       {
                                               cout<<"\nderive constructor allocating 10 bytes of memory";
                                            //a=new int [5];
                                               }
                                               ~derive()
                                               {
                                                        cout<<"\nderive destructor frees 10 bytes of memory\n";
                                                        //delete[]a;
                                                        }
                                                        };
                                                        int main()
                                                        {
                                                            base*ptr;
                                                            ptr=new derive;//create dynamic derived objecct
                                                            delete ptr;//destroying dynamic derived object
                                                           
                                                            return 0;
                                                            }
