//PROGRAM TO DEMONSTRATE THE CONCEPT OF POINTER TO DERIVED CLASS OBJECT

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
                                    class derv2:public base
                                    {
                                          public:
                                                 void display()
                                                 {
                                                 cout<<"derv2 display's called \n";
                                                 }
                                                 };
                                                 int main()
                                                 {
                                                 	
                                                 	
                                                     base *ptr; //pointer to base class
                                                   base b;
                                                   ptr=&b;
                                                   ptr->display();
                            
                                                    derv1 d1; //object of first derieved class
                                                    ptr=&d1;
													 ptr->display();
													/* derv2 d2; //object of second derieved class
                                                     d2.display();
													  //address of d1 to base pointer
                                                     
                                                     ptr=&d2;
                                                     ptr->display();
                                                     //p=&d1;
                                                 //   p=&b;
                                                    //p->display();*/
                        
                                                     }
                                    
