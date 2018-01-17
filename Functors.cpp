/**
 * 1. A functor is pretty much just a class which defines the operator(). 
 * 2. Unlike regular functions, they contain state.
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Multi
{
    int _val;
public:
    Multi(){}
    Multi(int val): _val(val){ }
    int operator() (int val)
    {
        return val * _val;
    }
};

int main()
{
    Multi m12(12);
    cout<<m12(2)<<"\n";
    cout<<m12(3)<<"\n";
    return 0;    
}



