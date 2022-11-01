#include "arrange01.h"
int main(int argc, char const *argv[])
{
    int arr1[] = {0, 1, 1, 2, 0, 1, 0, 0, 2};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    int *arr = arrange01(arr1, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}