#include <iostream>
using namespace std ;

class human 
{
    public:
    virtual void food ()
    {

    }
};
class child : public human 
{
    public:
    void food ()
    {
      cout<<"light  food "<<endl;
    }

};
class adult : public human
{
    public:
    void food()
    {
      cout<<"non veg";
    }
};
class overall
{
    public:
    human *human_ptr;
    child *child_ptr;
    adult *adult_ptr;
 overall()
 {
   human_ptr=new human;
   child_ptr=new child;
   adult_ptr=new adult;
 };

 void setmove(int a)
 {
   if (a==1)
   {
    human_ptr=child_ptr;
   }
   if (a==2)
   {
    human_ptr=adult_ptr;
   }
  // human_ptr->void food ();
 };
 void food ()
 {
   human_ptr->food();
 }
};