//DYNAMICALLY ALLOCATE AND DEALLOCATE MEMORY
#include<iostream.h>
#include<conio.h>




int main()
{
    float *ptr; //declaring a pointer to float
    ptr=new float;//allocate memory
    *ptr=10.5;
    cout<<*ptr;
    delete ptr; //releases the memory allocated
    getch();
    return 0;
}
