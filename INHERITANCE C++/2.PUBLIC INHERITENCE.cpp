//PROGRAM TO DEMONSTRATES THE PUBLIC INHERITANCE
#include<conio.h>
#include<iostream.h>
class base
{
      private:
              int priv_base;
              protected:
                        int prot_base;
                        public:
                               int get_base_priv()
                               {
                                   priv_base=10;
                                   return (priv_base);
                                   }
                                   }; //base class specification ends
                                   class derive:protected base
                                   {
                                         private:
                                                 int priv_der;
                                                 protected:
                                                           int prot_der;
                                                           public:
                                                                  void f1()
                                                                  {
                                                                       int x;
                                                                       //x=priv_base; //Generates the error,as base private member not accessible
                                                                       x=get_base_priv(); //inheritated base's public member accesses
                                                                       cout<<"value of base's private data member ="<<x;
                                                                       prot_base=20; //base protected member access
                                                                       cout<<"\n Value of base's protected data member ="<<prot_base;
                                                                       }
                                                                       }; //derieved class specification ends here
                                                                       int main()
                                                                       {
                                                                           derive d;
                                                                           int y;
                                                                            d.f1();
                                                                           y=d.get_base_priv();
                                                                           cout<<"\n Value of base private data member accessed in main ="<<y;
                                                                          
                                       getch();
                                       return 0;
                                       }                                    

