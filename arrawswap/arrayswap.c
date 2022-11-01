int *arrayswap(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i < n - 1)
            arr[i] = arr[i] + arr[i + 1] - (arr[i + 1] = arr[i]);
    }
    return arr;
}
