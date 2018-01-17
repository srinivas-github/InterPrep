/**
 * 1. To acheive the cleaning up of the objects in an heirarchy.
 * i.e., base class pointer is pointing to derived class object.
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual void fun(){ cout<<"In Base fun\n"; }
    Base() { cout<<"In Base::Constructor\n"; }
    virtual ~Base() { cout<<"In Base::Destructor\n"; }
};

class Derived: public Base
{
 public:
     virtual void fun() { cout<<"In Derived fun\n"; }
     Derived() { cout<<"In Derived::Constructor\n"; }
     ~Derived() { cout<<"In Derived::Destructor\n"; }
};

int main()
{
    Base* b1 = new Base();
    Base* b2 = new Derived();
    
    delete b1;
    delete b2;
    
    return 0;    
}


