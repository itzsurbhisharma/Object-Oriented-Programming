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
                  virtual ~ base()
                   {
                          cout<<"\nbase destructor ";
                          }
                          };
                          class derive:public base
                          {
                                
                                public:
                                       derive()
                                       {
                                               cout<<"\nderive constructor allocating 10 bytes of memory";
                                             
                                               }
                                               ~derive()
                                               {
                                                        cout<<"\nderive destructor frees 10 bytes of memory\n";
                                                     
                                                        }
                                                        };
                                                        int main()
                                                        {
                                                            
															
															base*ptr;
                                                            ptr=new derive;//create dynamic derived objecct
                                                            delete ptr;//destroying dynamic derived object
                                                           
                                                            return 0;
                                                            }
