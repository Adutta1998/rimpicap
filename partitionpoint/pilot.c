#include "partitionpoint.h"
int main(int argc, char const *argv[])
{
    int arr1[] = {4, 3, 2, 5, 8, 6, 7};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    int p1 = partitionpoint(arr1, n);
    printf("%d\n", p1);

    int arr2[] = {5, 6, 2, 8, 10, 9, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int p2 = partitionpoint(arr2, n2);
    printf("%d\n", p2);

    return 0;
}