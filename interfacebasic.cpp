#include <iostream>
using namespace std ;

class karthi
{  public :
     int a=20;
     int b=10;
    public :
  virtual  int returnstring()=0;
};
class murgesan : public karthi
{
    public:
    int returnstring()
    {
      int sum;
      sum=a+b;
      return sum;
    }
};
class nirmal : public karthi
{
    public:
    int returnstring()
    {
        return a;
    }
};
int main()
{
   karthi *k1;
  // karthi *k2;
   murgesan n2;
   nirmal n3;
   //murugesan m1;
   k1=&n2;
   cout<<k1->returnstring()<<endl;
   k1=&n3;
   cout<<k1->returnstring()<<endl;
   
}