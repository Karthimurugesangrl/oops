#include "interface.cpp"
#include <iostream>
using namespace std ;

int main()
{
    int a;
    cin>>a; 
    overall *overall_ptr=new overall;
    overall_ptr->setmove(a);
    overall_ptr-> food ();
}