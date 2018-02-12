#include <iostream>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = *a;
}

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        bool flag = 0;
	for (int j = 0; j < n-i-1; j++)
	{
	    if ( arr[j] < arr[j+1])
	    {
	        swap(&arr[j], &arr[j+1]);
		flag = 1;
	    }
	}
	if (flag == 0)
	    break;

    }
}

int main()
{
    int arr[] = {7,5,9,8,1,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    BubbleSort(arr, n);
    return 0;
}
