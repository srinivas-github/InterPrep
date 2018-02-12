/**
 * 1. Insertion is not best algorithm in terms of performance.
 * 2. Ŕunning time complexity is O(n) is best case
 * 3. Worst case O(n**2)
 */

void InsertionSort(int arr[], int n)
{
    int i, value, hole;

    for (i = 1; i < n; i++)
    {
        value = arr[i];
	hole = i;

	while ( hole > 0 && arr[hole-1] > value )
	{
	    arr[hole] = arr[hole-1];
	    hole = hole -1;

	}
	arr[hole] = value;
    }
}

int main()
{
    int arr[] = {7,4,5,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    InsertionSort(arr, n);
    return 0;
}
