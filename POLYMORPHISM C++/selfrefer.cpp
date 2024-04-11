#include <iostream>
using namespace std;
class linked_ints 
{
public:
  linked_ints() : next(nullptr), x(0) {}
  linked_ints * next;
  int x;
 
void print(linked_ints * b) {
  if(b == nullptr) 
 return;
  do {
    cout << b->x << endl;
  } while((b = b->next));
};



int main()
{
  linked_ints  x, y, z;
  x.next = &y; y.next = &z;
  print(&x);
  return 0;
}

