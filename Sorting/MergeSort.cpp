#include <iostream>


void Merge(int *A, int *L, int lCnt, int *R, int rCnt)
{
    int i, j, k;
    i = j = k = 0;

    while ( i < lCnt && j < rCnt)
    {
        if ( L[i] < R[j])
	    A[k++] = L[i++];
	else
	    A[k++] = R[j++];
    }

    while ( i < lCnt)
        A[k++] = L[i++];

    while ( j < rCnt)
        A[k++] = R[j++];

}

void MergeSort(int arr[], int n)
{
    int i;

    if ( n < 2)
        return;
    int mid = n/2;

    int *L = (int*)malloc(sizeof(int) * mid);
    int *R = (int*)malloc(sizeof(int) * (n-mid));
    
    for (i = 0; i < mid; i++)
        L[i] = arr[i];
    for (i = mid; i < n; i++)
        R[i-mid] = arr[i];

    MergeSort(L, mid);
    MergeSort(R, n-mid);

    Merge(arr, L, mid, R, n-mid);

}

int main()
{
    int arr[] = {8, 9, 7, 1, 4, 2, 3,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    MergeSort(arr, n);

    for(int i = 0, i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
