int multiply(int arr[], int n, int arr_size)
{
    int rem = 0;
    for (int i = 0; i < arr_size; i++)
    {
        int product = arr[i] * n + rem;
        arr[i] = product % 10;
        rem = product / 10;
    }
    while (rem)
    {
        arr[arr_size] = rem % 10;
        rem /= 10;
        arr_size++;
    }
    return arr_size;
}

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n)
{

    int arr[1000];
    arr[0] = 1;
    int arr_size = 1;

    for (int i = 2; i <= n; i++)
        arr_size = multiply(arr, i, arr_size);

    for (int i = arr_size - 1; i >= 0; i--)
        cout << arr[i];
}
