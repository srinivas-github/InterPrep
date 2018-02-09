#include <iostream>
#include <bits/stdc++.h>

void printPairs(int arr[], int n)
{
    vector<int> v;

    for(int i = 0; i < n; i++)
        for(int j = i+1; i < n; i++)
	    if ( abs(arr[i]) == abs(arr[j]) )
	        v.push_back(abs(arr[i]);

    if ( v.size() == 0)
        return ;

    sort(v.begin(), v.end());

    for (int i = o, i < v.size(); i++)
        cout<<-v[i]<<" "<<v[i];

}

void printPairs_Map(int arr[], int n)
{
    vector<int> v;
    unordered_map<int, bool> cnt;

    for (int  i = 0; i < n; i++)
    {
        if ( cnt[abs(arr[i])] == 0 )
	     cnt[abs(arr[i])] = 1;
	else
	{
	    v.push_back(abs(arr[i]));
	    cnt[abs(arr[i])] = 0;
	}
	   
    }

    if ( v.size() == 0)
        return ;

    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout<<-v[i]<<" "<<v[i];

}

int main()
{
    int arr[] = {1,2,3,-1,-2,-3,4,-4};
    int n = sizeof(arr)/sizeof(arr[0]);
    printPairs(arr, n);
    return 0;
}
