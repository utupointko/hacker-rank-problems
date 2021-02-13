// Complete the introTutorial function below.
int introTutorial(int V, vector<int> arr)
{

    int l = 0;
    int r = arr.size() - 1;

    while (l != r)
    {
        int mid = (l + r) / 2;
        if (V == arr[mid])
            return mid;

        if (V < arr[mid])
        {
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << l;
    return r;
}