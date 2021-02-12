// Complete the almostSorted function below.
void almostSorted(vector<int> arr)
{
    int n = arr.size();
    bool flag = true;

    int id1 = 0;
    int id2 = 0;

    if (is_sorted(arr.begin(), arr.end()))
        cout << "yes\n";

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            id1 = i;
            break;
        }
    }
    for (int j = n - 1; j > 0; j--)
    {
        if (arr[j] < arr[j - 1])
        {
            id2 = j;
            break;
        }
    }

    // cout<<id1<<' '<<id2<<'\n';

    swap(arr[id1], arr[id2]);
    if (is_sorted(arr.begin(), arr.end()))
    {
        cout << "yes\nswap " << id1 + 1 << ' ' << id2 + 1 << '\n';
        flag = false;
    }
    else
        swap(arr[id1], arr[id2]);

    reverse(arr.begin() + id1, arr.begin() + id2 + 1);
    if (is_sorted(arr.begin(), arr.end()))
    {
        cout << "yes\nreverse " << id1 + 1 << ' ' << id2 + 1 << '\n';
        flag = false;
    }
    if (flag)
        cout << "no";
}