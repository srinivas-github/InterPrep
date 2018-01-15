/**
 * What is placement "new" and when to use it ?
 * Ans: 
 * In placement new, we can pass a pre-allocated memory and construct an object
 * in the passed memory
 */

#include <iostream>

class Base
{
    private:
        int a;
    public:
        Base()
	{
	    std::cout<<"In Base Constructor\n";
	}
	~Base()
	{
	    std::cout<<"In Base destructor\n";
	}
};

int  main()
{
    //Normal Case
    std::cout<<"Normal Case\n";
    Base* bp = new Base();
    delete bp;

    //placement new case
    std::cout<<"Placement new case\n";
    char* memory = new char[10 * sizeof(Base)];

    Base* bp1 = new (&memory[0]) Base();
    Base* bp2 = new (&memory[4]) Base();
    Base* bp3 = new (&memory[8]) Base();

    obj1->~Base();
    obj2->~Base();
    obj3->~Base();

    delete [] memory;
    return 1;
}
