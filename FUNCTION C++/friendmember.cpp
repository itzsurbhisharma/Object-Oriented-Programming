//member of one class but friend of another
#include <iostream>
using namespace std;
class A; // forward declaration of A needed by B
class B
{
    public:
        void display(A); //no body declared
};
class A
{
    int x;
        friend void B::display(A);
};
void B::display(A obj)
{
    cout << obj.x << endl;
}
int main()
{
    A a;
    B b;
    b.display(a);
    return 0;
}
