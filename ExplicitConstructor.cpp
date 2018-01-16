/**
 * What is explicit constructor ?
 */

#include <iostream>

class Base
{
    int b_var;
public:
    Base() {}
    explicit Base(int a): b_var(a) {}
    void print() { std::cout<<b_var<<std::endl; }

};

void func(Base b)
{
    b.print();
}

int main()
{
    Base b1(10); //Normal call to constructor
    Base b2 = 20; //Impilicit call to constructor

    func(b1); //Normal call to constructor
    func(30); //implicit call to constructor

    return 0;
}
