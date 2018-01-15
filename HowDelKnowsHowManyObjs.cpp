/**
 * 1. How "delete[]" knows how many objects to delete?
 * Answer:
 * Two ways: 1. Over Allocation 2. Associative Array
 */

 #include <iostream>

const int n = 10;

class Base
{
    public:
       int b_var;
       Base(){};
       ~Base(){};
 };

int main()
{
    Base* bp = new Base[n];

    /**
     * The following will perfomr by the compiler
     * internally to allocate 10 base objects
     */
     //char* tmp = (char*) operator new[] (WORDSIZE + n * sizeof(Base));
     //Base* bp = (Base*) (tmp + WORDSIZE);
     //*(size_t*)tmp = n;
     //for (int i = 0; i < n; ++i)
     //   new (bp + i) Base(); --> Placement new
     
     delete[] bp;

     /**
      * The following steps are performed by the compiler to delete the n objects
      */
     //size_t n = (size_t*) ( (char*)bp - WORDSIZE); 
     //while (n--  != 0)
     //    (bp + n)-> ~Base();
     //operator delete[] ( (char*)bp - WORDSIZE);

     return 1;

       
}
