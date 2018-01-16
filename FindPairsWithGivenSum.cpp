/**
 * Given an array, find whether pair exisit in array
 * Example: [1,2,3,9], sum = 8, NO
 *          [1,2,4,4], sum = 8, Yes
 */

#include <iostream>
#include <bits/stdc++.h>

bool hasPairWithSum(const vector<int>& data,  int sum)
{
    std::unordered_set<int> comp; //complements

    for( std::vector<int>::iterator itr = data.begin(); itr != data.end(); ++itr)
    {
        if (comp.find((*itr)) != comp.end())
	    return true;
	comp.insert( sum - (*itr));
    }
    return false;
}

int main()
{
    int arr = {1,2,4,4};
    std::vector<int> data(arr, arr+sizeof(arr)/sizeof(arr[0]);

    int sum = 8;
    if ( hasPairWithSum(data, sum))
        std::cout<<"Yes\n";
    else
        std::cout<<"No\n";
    return 0;
}
