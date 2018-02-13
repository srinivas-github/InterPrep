#include <iostream>

int BinarySearch(int arr[], int sz, int x, bool findF)
{
    int res = -1, mid = 0, low = 0, high = sz-1;

    while ( low <= high)
    {
        mid = (low + high )/2;
	if ( x == arr[mid])
	{
	    res = mid;
	    if(findF)
	        high = mid -1;
	    else
	        low = mid + 1;
	}
	else if ( x < arr[mid])
	    high = mid -1;
	else
	    low = mid + 1;
    }
    return res;
}

int  main()
{
    int arr[] = {1,2,2,2,3,3,3,4,5,5,5,5,5,5,6,7,8};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int x = 5;

    int i1 = BinarySearch(arr, sz, x, true);
    if ( i1 == -1)
    {
        printf("No element found\n");
        return -1;
    }
    else
    {
        int i2 = BinarySearch(arr, sz, x, false);
	printf("First Index at: %d, last index: %d\n", i1, i2);
    }
    return 0;
}
