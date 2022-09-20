#include <iostream>
using namespace std ;

class  base {
  public:
  virtual void func1()
  {
    cout<<"base class function 1\n";
  } 
  virtual void func2()
  {
    cout<<"base class function 2\n";
  }
  void func3()
  {
    cout<<"base class function 3\n";
  } 
};
class derived : public base {
    public:
    void func1()
    {
        cout<<"derived class function 1\n";
    }
    void func2()
    {
        cout<<"derived class function 2\n";
    }
    void func3()
    {
        cout<<"derived class function 3";
    }
};
int main()
{
    base bptr;
    derived obj;
    bptr=&obj;
    // late binding bcoz there is virutal keyword (overriden by derived class)
    bptr->func1();
    // late binding bcoz there is virutal keyword(overriden by derived class)
    bptr->func2();
    // early binding bcoz there is  no virutal keyword()
    bptr->func3();
   return 0;
}