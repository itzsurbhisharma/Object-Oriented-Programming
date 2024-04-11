//PROGRAM TO DEMONSTRATES THE PROTECTED INHERITANCE
#include<conio.h>
#include<iostream.h>
class base
{
      private:
              int priv_base;
              protected:
                        int prot_base;
                        public:
                               int x;
                               int get_base_priv()
                               {
                                   priv_base=10;
                                   return (priv_base);
                                   }
                                   }; //base class specification ends
                                   class derive:private base
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
                                                                         //  d.x=5;
                                                                          //y=d.get_base_priv();//ERROR as this public function of base becomes protected and cannot be accessed outside class.
                                                                          // cout<<"\n Value of base private data member accessed indirecctly ="<<y;
                                      // y =d.prot_base; //generates error as base protected member not accessible
                                       getch();
                                       return 0;
                                       }                                    

