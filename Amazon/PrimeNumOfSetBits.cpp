#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int setBits(int n)
{
    int count = 0;
    while ( n)
    {
         count += n & 1;
         n = n >>= 1;
    }
    return count;
}

void PrimeNumOfSetBits(int L, int R)
{
    vector<int> v;
    bool primes[R+1];
    memset(primes, true, sizeof(primes));

    for (int p = 2; p*p <= R; p++)
    {
        if (primes[p] == true)
        {
            for (int i = p*2; i<=R; i += p)
            {
                primes[i] = false;
            }
        }
    }

    for (int i = 2; i <= R; i++)
    {
        if ( primes[i])
            v.push_back(i);
    }
    int pCount = 0;

    for (int i = L; i <= R; i++)
    {
        int tmp = setBits(i);
        if (std::find(v.begin(), v.end(), tmp) != v.end() )
            pCount += 1;
    }
    cout<<"Number of Prime set bits is: "<<pCount<<std::endl;
}

int main()

{

    int L = 10;

    int  R = 15;

    PrimeNumOfSetBits(L, R);
    return 0;

}
