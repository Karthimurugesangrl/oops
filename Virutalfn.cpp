#include <iostream>
using namespace std;
class Geo
{
public:
virtual void angle()=0;
};
class Acute: public Geo
{
public:
void angle ()
{
cout <<"making it less than 90 degree" <<endl;
}
};
class Right: public Geo
{
public:
void angle ()
{
cout <<"Making exactly 90 degree" <<endl;
}
};
int main () {
    Geo *geow;
Acute r;
Right rir;

//r.angle();
//rir.angle();
geow=&r;
geow->angle();
geow=&rir;
geow->angle();

return 0;
}