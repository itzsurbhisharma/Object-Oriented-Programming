//PROGRAM TO DEMONSTRATE THE USE OBJECT SLICING
#include <iostream>
#include<conio.h>
using namespace std;

class Base {
        int data1;
        int data2;
    public:
        Base(int a, int b) 
        {
            data1 = a;
            data2 = b;
        }

        virtual void display() {
            cout << "I am Base class" << endl;
        }
};

class Derived : public Base {
        int data3;
    public:
        Derived(int a, int b, int c) : Base(a, b) {
            data3 = c;
        }

        void display() {
            cout << "I am Derived class" << endl;
        }
};

void somefunc ( Base obj )
{
    obj.display();
}

int main()
{
    Base b(10, 20);
    Derived d(100, 200, 300);

    somefunc(b);
    somefunc(d);
    getch();
    return 0;
}
