1. What are all those places where initializer list is must in C++ ?
Ans:  1. Whenever we want to initialize non-static const data member of a class.
example:

    class Int
    {
        int _x;
    public:
        Int(): _x(0) {}	
	Int(int x): _x(x) {}
    };


2. Whenever we wnat to initiaize reference member of a class.
example:
    class Int
    {
        int& _x;
    public:
        Int(int x):_x(x){}
    };

3. If one class is used as member in another class, which is Not having a default constructor, we need initlizer list.
example:
    class One
    {
        int _x;
    public:
        One(int x): _x(x) {}
    };

    class Two
    {
        One a;
    public:
        Two (One x): a(x) { }
    };

    int main()
    {
        One one(10);
	Two two(one);
    }

4. In Inheritance, to initialize the base class member varaibles.
example:
    class Base
    {
        int _x;
     public:
         Base(int x): _x(x) { }
    };

    class Derived: public Base
    {
        int _y;
     public:'
         Derived(int x, int y): Base(x), _y(y) { }
    };

    int main()
    {
        Derived d(1,2);
	return 0; 
    }

 5. When class member name and temporary variable names are same then we need initializer list
 example:
    class Base
    {
        int _x;
    public:
        Base(int _x) : _x(_x) { }
    };

=================================================================================================================================================

2. How to return Array from a function?

Ans: 
1. By using static variable
Example:
    int* function()
    {
        static int arr[] = {1,2,3};
	return arr;
    }
    int main()
    {
        int* arr = function();
	cout<<arr[0]<<arr[1]<<arr[2];
	return 0;
    }
2. By crreating from dynamically
example:
    int* function()
    {
        int* arr = new int[3];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	return arr;
    }
    int  main()
    {
        int* arr = function();
	cout<<arr[0]<<arr[1]<<arr[2];
	return 0;
    }
===========================================================================================================================================
3. Difference between reference and pointers
Ans:
1. Memory Address: 
   int main()
   {
      int i = 10;
      int &r = i;
      int* p = &i;
       return 0;
   }
   Here, memory address of "i" and "r" are same. i.e., r is referring the i
   and "p" is having its own memory address.

2. Reassignment is Not possible with reference
3. NULL assignment:
   References are need to initialized at time of delcaration, u can Not reinitialize it something else, but pointers can.
4. Arthimetic operations on References
5. Indirection 
   
