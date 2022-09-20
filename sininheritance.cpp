#include <iostream>
using namespace std ;
class Karthi
{   int a=10 ;
    int b=20;
    public:
    void method1()
    {
        cout<<"the value of a is ="<<a<<endl;
    }
    void method2()
    {
        cout<<"the value of b is ="<<b<<endl;
    }

};
class Murugesan : public Karthi
{
    int a=11;
    int b=21;
    public :
    void method3()
    {
        cout<<"the value of a is ="<<a<<endl;
    }
    void method4()
    {
        cout<<"the value  of b is ="<<b<<endl;
    }
};
int main()
{
    Murugesan obj1;
    obj1.method1();
    obj1.method2();
    obj1.method3();
    return 0;
}
