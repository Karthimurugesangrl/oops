#include <iostream>
using namespace std ;
void func1(int,string);
void func1(int,double);
class one 
{
    public:
    int a;
    string b;
    void func1(int a,string b)
    {
  this->  a=a;
  this->  b=b;
    cout<<"the value of the a andb is ="<<a<<b<<endl;
    }
};
class two :public one
{
    public :
    int a ;
    double b;
    void func1(int a , double b)
    {
       this-> a=b;
       this-> b=b;
        cout <<"the value of a and b is ="<<a<<"\t"<<b<<endl;
    }
};
int main()
{
    two ce2;
    ce2.func1(10,10000);
}