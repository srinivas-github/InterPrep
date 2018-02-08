#include <iostream>
using namespace std;
int BinarySearch(int arr[], int sz, int x, bool findFisrt)
{
    int low = o, high = sz-1;
    int  mid = 0;
    int res = -1;

    while ( low <= high)
    {
        mid = (low + high)/2;
	if ( arr[mid] == x)
	{
	    res = mid;
	    if (findFisrt)
	        high = mid-1;
	    else
	        low = mid +1;
	}
	else if ( x < arr[mid])
	    high = mid - 1;
	else
	    low = mid + 1;
    }
    return res;
}


int main()
{
    int arr[] = {2, 3, 3, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 7, 8, 9, 10};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int x = 5;

    int firstIndex = BinarySearch(arr, sz, x, true);
    if ( firstIndex == -1)
    {
        printf("Not found\n");
	return 0;
    }
    else
    {
        int lastIndex = BinarySearch(arr, sz, x, false);
	printf("Count of %d is %d\n", x, lastIndex - firstIndex + 1);
    }
    return 0;
}
