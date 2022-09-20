#include <iostream>
using namespace std ;
class cat
{
    public:
    void func1()
    {
        cout<<"the cat was in wrong place"<<endl;
    }
};
class animal : public cat
{
    public :
    void func2()
    {
        cout<<"animal going to eat deer"<<endl;
    }
};
class dog : public animal
{
    public:
    void func3()
    {
        cout<<"animal and dog were fighting"<<endl;
    }
};
int main()
{
    dog obj1;
    obj1.func1();
    obj1.func2();
    obj1.func3();
    return 0;
}





