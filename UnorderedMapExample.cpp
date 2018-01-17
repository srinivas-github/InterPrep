/**
 * 1. Unordered map is an associative container that stores elements in key and value pair.
 * 2. Unordered map is implemented by using the Hash table and hashing. Time complexity of operations is O(1).
 *  And is worst case O(n), depends on the hashing 
 * 3. Map is ordered sequence of unique keys where as in unordered map key can be stored in anywhere.
 * 4. Map is implemented by using the balanced tree structure, that's why it's possible to maintain an order
 *  between the elements. Time complexity of map operations is O(logN) where as for unordered map, it is O(1)
 */

#include <bits/stdc++.h>

int main()
{
    unordered_map<string, double> umap;

    //insert by using [] operator
    umap["PI"] = 3.141;
    umap["log1"] = 2.4;
    
    //insert bu using the insert method
    umap.insert(make_pair("e", 100.1));
    
    string key = "PI";
    if ( umap.find(key) == umap.end())
        cout<<key<<"Not Found\n\n";
    else
        cout<<key<<"found\n";
    unordered_map<string, double>::iterator itr;
    for (itr = umap.begin(); itr != umap.end(); itr++)
        cout<<itr->first<<" "<<itr->second<<"\n";
    
    return 0;
}
