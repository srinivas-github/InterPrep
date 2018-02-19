/**
  * Given two unsorted arrays arr1[] and arr2[]. They may contain duplicates. 
  * For each element in arr1[] count elements less than or equal to it in array arr2[].
  * Example:
  *  Input : arr1[] = [1, 2, 3, 4, 7, 9]
  *
  * arr2[] = [0, 1, 2, 1, 1, 4]
  *  Output : [4, 5, 5, 6, 6, 6]
  *
  *  Input : arr1[] = [5, 10, 2, 6, 1, 8, 6, 12]
  *	    arr2[] = [6, 5, 11, 4, 2, 3, 7]
  *  Output : [4, 6, 1, 5, 0, 6, 5, 7]
  */

#include <iostream>
#include <bits/stdc++.h>

int binary_search(int arr[], int l, int h, int x)
{
    while ( l <= h)
    {
        int mid = (l+h)/2;
	if ( arr[mid] <= x)
	    l = mid+1;
	else
	    h = mid-1;
    }
    return h;
}

void countEleLessThanOrEq(int arr1[], int arr2[], int m, int n)
{
    std::sort(arr2, arr2+n);

    for (int i = 0; i <= m; i++)
    {
        int index = binary_search(arr2, 0, n-1, arr1[i]);
	printf("%d ", index+1); 
    }
}

int main()
{
    int arr1[] = {1,2,3,4,5,6,7};
    int arr2[] = {0,1,2,1,1,2,4};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    countEleLessThanOrEq(arr1, arr2, m, n);

    return 0;
}
