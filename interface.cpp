// Client Code - Siddhesh
#include "interface_library.h"

// Client Code
int main()
{
    int selector = 0;
    std::cin>>selector;
    if(selector == 1)
    {
        moveLeft();
    }
    else if(selector == 2)
    {
        moveRight();
    }
    else if(selector == 3)
    {
        moveFront();
    }
    else if(selector == 4)
    {
        moveBack();
    }
    else if(selector == 5)
    {
        moveNorthEast();
    }
    else if(selector == 6)
    {
        moveNorthWest();
    }
    else if(selector == 7)
    {
        moveSouthEast();
    }
    else if(selector == 8)
    {
        moveSouthWest();
    }
}