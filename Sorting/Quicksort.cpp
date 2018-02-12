/**
 * Quick Sort : 
 * 1. in-place sorting
 * 2. running time: O(nlogn) - Avg. case
 *                O(n2) - worst case
 */

#include <iostream>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int partition(int arr, int start, int end)
{
    int pivot = arr[end];
    int pIndex = start;

    for(int i = start; i < end; i++)
    {
        if ( arr[i] <= pivot)
	{
	    swap(&arr[i], &arr[pIndex]);
	    pIndex++;
	}
    }
    swap(&arr[pIndex], &arr[end]);
    return pIndex;

}

void QuickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pIndex = partition(arr, start, end);
	QuickSort(arr, start, pIndex-1);
	QuickSort(arr, pIndex+1, end);
    }
}

int main()
{
    int arr[] = {12, 3, 15, 3, 2, 4, 5, 9, 7, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int start = 0, end = n-1;

    QuickSort(arr, start, end);

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
