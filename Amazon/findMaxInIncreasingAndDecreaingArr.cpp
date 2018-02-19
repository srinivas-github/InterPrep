#include <iostream>

int findMax(int arr[], int low, int high)
{
    if (low == high)
        return arr[low];

    if ( (low == high +1) && ( arr[low] >= arr[high]) )
        return arr[low];

    if ( (low == high+1) && (arr[low] < arr[high]) )
        return arr[high];

    int mid = (low+high)/2;

    if ( arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1])
        return arr[mid];

    if ( arr[mid] > arr[mid+1] && arr[mid] < arr[mid-1])
        return findMax(arr, low, mid-1);
    else
        return findMax(arr, mid+1, high);
}

int  main()
{
    int arr[] = {2,4,6,8,9,11,13,11,10,9,6,5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = findMax(arr, low, n-1);
    return 0;
}
