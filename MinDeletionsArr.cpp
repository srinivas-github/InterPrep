
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int minDeletions(int arr[], int n)
{
    unordered_map<int, int> freqMap;
    
    for (int i = 0; i < n; i++)
        freqMap[arr[i]]++;
    
    int max_freq = INT_MIN;
    unordered_map<int, int>::iterator itr = freqMap.begin();
    for (; itr != freqMap.end(); itr++)
        max_freq = max(max_freq, itr->second);
    
    return n - max_freq;
}

int main()
{
    int arr[] = {4, 2, 3, 4, 4, 4};
    cout<<"Min deletions needed: "<<minDeletions(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}



