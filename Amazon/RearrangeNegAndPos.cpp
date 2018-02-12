#include <iostream>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reArrangeNegPos(int arr[], int n)
{
    int i = -1;

    for (int j = 0; j < n; j++)
    {
        if ( arr[j] < 0)
	{
	    i++;
	    swap(&arr[i], &arr[j]);

	}
    }

    int pos = i+1, neg = 0;

    while ( pos < n && neg < pos && arr[neg] < 0)
    {
        swap(&arr[neg], &arr[pos]);
	pos++;
	neg += 2;
    }

}

int main()
{
    int arr[] = {3,4,-4,-2,10,-11, 34, -45, 4, -5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reArrangeNegPos(arr, n);
    return 0;
    
}
