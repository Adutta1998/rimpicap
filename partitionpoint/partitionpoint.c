#include "partitionpoint.h"
int partitionpoint(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int check = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] >= arr[i])
            {
                check = 1;
                break;
            }
        }
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] <= arr[i])
            {
                check = 1;
                break;
            }
        }
        if (check == 0)
            return arr[i];
    }
    return -1;
}