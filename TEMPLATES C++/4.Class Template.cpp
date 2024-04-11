//PROGRAM TO DEMONSTRATE THE USE OF THE CLASS TEMPLATE
#include <iostream.h>
#include<conio.h>


template <class T>
class mypair 
{
    T a, b;
  public:
    mypair (T first, T second)
      {
           a=first; 
           b=second;
           }
    T getmax ();
};

template <class T>
T mypair<T>::getmax ()
{
  T retval;
  retval = a>b? a : b;
  return retval;
}

int main ()
 {
  mypair <int> myobject (100, 75);
  mypair <float> myobject1(100.25,100.75);
  
  cout << myobject.getmax();
  //mypair <float> myobject(100.56,100.34);
 cout<<myobject1.getmax();
  getch();
  return 0;
}
