#include <iostream>

using namespace std ;

class vehicle 
{
    public:
    int regno;
    void engine ()
    {
      cout<< "the engine were going to  start"<<endl;
    }
    void brake ()
    {
        cout<<"the brake should be appiled"<<endl;
    }
    void fuel()
    {
        cout << " there should be enough fuel"<<endl;
    }
};
class car : public vehicle
{
    public:
    int model;   
};
class bus : public vehicle
{
    public:
    int capacity;   
};
class truck : public vehicle
{
    public:
    int price ;
};
int main()
{
    car obj1;
    obj1.regno=10101;
    obj1.model=2020;
    cout<<"the register number of the vehicle is ="<<obj1.regno<<endl;
    cout<<"the model of the car is ="<<obj1.model<<endl;
    obj1.brake();
    obj1.engine();
    obj1.fuel();
    return 0;
}