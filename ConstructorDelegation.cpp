/**
 * What is constructor delegation ?
 * To avoid code bloating, delegating the constructor.
 * Writing all the repeated code in one constructor and delegate that
 */

#include <iostream>

class Base
{
    int _x, _y;
public:
    Base(): Base(0,0) {}
    Base(int a): Base(a,0){}
    Base (int x, int y)
    {
        ...
	...
	_x = some_x;
	_y = some_y;
    }
};

int  main()
{
    Base b1;
    Base b2(10);
    Base b2(100, 200);

    return 0;
}
