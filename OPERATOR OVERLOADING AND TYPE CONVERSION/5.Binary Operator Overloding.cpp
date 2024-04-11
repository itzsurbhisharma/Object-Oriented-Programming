c//OVERLODING BINARY OPERATORS
#include<iomanip.h>
#include<conio.h>
#include<iostream.h>
class complex
{
      private:
              double real,img;
              public:
                     complex() //no argument constructor
                     {
                               real=img=0.0;
                               }
                               void read() //read complex number
                               {
                                    cout<<"\nEnter real and imaginary part";
                                    cin>>real>>img;
                                    }
                                    complex operator+(complex c2) //overloded operator function '+'
                                    {
                                            complex temp; //no argument constructor called
                                            temp.real=real+c2.real;
                                            temp.img=img+c2.img;
                                            return temp;
                                            }
                                            void show()
                                            {
                                                 if(img>0)
                                                 cout<<real<<"+"<<img<<"i"<<"\n";
                                                 else
                                                 cout<<real<<img<<"i";
                                                 }
                                                 //friend complex operator+(complex c1,complex c2)
                                                 };
                                               /* complex operator+(complex c1,complex c2)
                                                {
                                                 complex temp; //no argument constructor called
                                            temp.real=c1.real+c2.real;
                                            temp.img=c1.img+c2.img;
                                            return temp;	
												}*/
                                                 int main()
                                                 {
                                                     complex c1,c2,c3;
                                                     cout<<"\nEnter complex number c1 :";
                                                     c1.read();
                                                     cout<<"\nEnter complex number c2 :";
                                                     c2.read();
                                                     c3=c1+c2; //c1.operator+(c2)
                                                     c3.show(); //display the result
                                                     getch();
                                                     return 0;
                                                     }
                                     
