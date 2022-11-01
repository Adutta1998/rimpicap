#include "arrawswap.h"
int main(int argc, char const *argv[])
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    int *arr = arrayswap(arr1, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}