/**
 * 1. Simplest of all sortings
 * 2. Not an inplace sorting algorithm. Requires aulilary space.
 * 3. Not an inplace sorting algorithm. Requires aulilary space.
 * 3. Inplace selection sort can be done as follows:
 */
#include <iostream>

void swap(int *a, int *b)
{
    int temp = *a;
    *b = *a;
    *a = temp;
}

void SelectionSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int iMin = i;
	for ( int j = i+1; j < n; j++)
	{
	    if ( arr[j] < arr[iMin])
	        iMin = j;
	}
	swap(&arr[i], &arr[iMin]);
    }
}

int main()
{
    int arr[] = {6,8,9,1,2,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr, n);
    return 0;
}
