#include <iostream>
using namespace std ;

class Employee
{
    private:
    int Empid;
    int salary;
    string name ;
    public:
    Employee(int epid,string n,int sal=0)
    {
        Empid=epid;
        salary=sal;
        name=n;
    }
    void print()
    {
        cout<<"the name of the Employee="<<name<<endl;
        cout<<"salary of the Employee="<<salary<<endl;
        cout<<"employee id="<<Empid<<endl;
    }
    void setsalary(int s)
    {
       salary=s;
    }
    int getsalary()
    {
        return salary;
    }
};
class ContractEmployee : public Employee
{private :
int workhours;//monthly
public :
ContractEmployee(int epid,string n,int wh)
:Employee(epid,n)
{
    workhours=wh;
    setsalary();
}
 void setsalary()
 {
    Employee::setsalary(workhours*100);
 }
 void print()
 {
    Employee::print();
    cout<<"workhours"<<workhours<<endl;
 }

};

int main()
{
    Employee e1(2560,"karthi",2500);
    e1.print();
    e1.setsalary(7000);
    e1.print();
    ContractEmployee ce1(1,"karthi murugesan",25);
    ce1.print();
   
    return 0;
}