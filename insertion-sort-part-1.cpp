void print(vector<int> arr)
{
    for (auto e : arr)
        cout << e << " ";
    cout << endl;
}

// Complete the insertionSort1 function below.
void insertionSort1(int n, vector<int> arr)
{
    int e = arr[n - 1];
    int i = n - 2;
    while (e < arr[i] && i >= 0)
    {
        arr[i + 1] = arr[i];
        i--;
        print(arr);
    }
    arr[i + 1] = e;
    print(arr);
}
