//PROGRAM TO DEMONSTRATE THE CONCEPT OF VIRTUAL FUNCTION

#include<iostream>
using namespace std;
class base
{
      public:
              virtual void display()
             {
                  cout<<"base class display called\n";
                  }
                  };
                  class derv1:public base
                  {
                        public:
                               void display()
                               {
                                    cout<<"derv1 display's called \n";
                                    }
                                    };
                                    
                                                 int main()
                                                 {
                                                     base *ptr; //pointer to base class
                                                     base b1;
                                                     ptr=&b1;
                                                     ptr->display();
                                                     derv1 d1; //object of first derieved class
                                                     ptr=&d1; //address of d1 to base pointer
                                                     ptr->display();
                                                     
                                                    
                                                     
                                                  
                                                     return 0;
                                                     }
                                    
